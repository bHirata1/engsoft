#include "SaidaDAO.h"



SaidaDAO::SaidaDAO()
{
}


void SaidaDAO::criarSaida(time_t data, string equipe, Ordem_de_Servico ** os, Equipamento ** eqp)
{
	string log;
	int id, i = 0;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT into Saida (data,nomeequipe) values (?,?)");
		preparedStatement->setString(1, "2018-05-15");
		preparedStatement->setString(2, equipe.c_str());
		resultSet = preparedStatement->executeQuery();


		preparedStatement = connection->prepareStatement("select max(idsaida) from Saida");
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next())
			id = resultSet->getInt(1);

		while (os[i] != NULL)
		{
			preparedStatement = connection->prepareStatement("INSERT into SaidaOS (idordem,idsaida,prioridade) values (?,?,?)");
			preparedStatement->setInt(1, os[i]->getidordem());
			preparedStatement->setInt(2, id);
			preparedStatement->setInt(3, i+1);
			resultSet = preparedStatement->executeQuery();
			Ordem_De_ServicoDAO::editarOrdemDeServico(os[i]->getidordem(), "AGENDADA");
			i++;
		}
		i = 0;
		while (eqp[i] != NULL)
		{
			preparedStatement = connection->prepareStatement("INSERT into SaidaEquipamento (idsaida,idequipamento) values (?,?)");
			preparedStatement->setString(2, eqp[i]->getnome().c_str());
			preparedStatement->setInt(1, id);
			resultSet = preparedStatement->executeQuery();
			i++;
		}




	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}

}