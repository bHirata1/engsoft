#include "SaidaDAO.h"



SaidaDAO::SaidaDAO()
{
}


void SaidaDAO::criarSaida(string data, string equipe, Ordem_de_Servico ** os, Equipamento ** eqp)
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
		preparedStatement = connection->prepareStatement("INSERT into Saida (data,nomeequipe,statussaida) values (?,?,'AGENDADA')");
		preparedStatement->setString(1, data);
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

int SaidaDAO::contarSaidasAgendadas(string login)
{
	string log;
	Ordem_de_Servico * ordemDeServico;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT count(*) FROM Saida join Equipe using (nomeequipe) where statussaida='AGENDADA' and encarregado=?");
		preparedStatement->setString(1, login.c_str());
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			return resultSet->getInt(1);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return 0;
}

Saida** SaidaDAO::SelecionarAgendadas(string nome)
{
	string log;
	Saida ** os;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select idsaida,data from Saida join Equipe using (nomeequipe) where encarregado = ? and statussaida='AGENDADA'");
		preparedStatement->setString(1,nome);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		os = new Saida*[t];
		while (resultSet->next()) {

			os[i] = new Saida();
			os[i]->setdata(resultSet->getString(2));
			os[i]->setidsaida(resultSet->getInt(1));
			i++;
		}
		os[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return os;
}