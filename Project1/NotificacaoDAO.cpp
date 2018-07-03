#include "NotificacaoDAO.h"

NotificacaoDAO::NotificacaoDAO()
{
}

void NotificacaoDAO::criarNotificacao(string data, string hora, string status)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO Notificacao (data, hora, status) VALUES (?,?,?)");

		preparedStatement->setString(1, data.c_str());
		preparedStatement->setString(2, hora.c_str());
		preparedStatement->setString(3, status.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void NotificacaoDAO::deletarNotificacao(int idordem)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM Notificacao WHERE idNotificacao = ?");

		preparedStatement->setInt(1, idordem);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void NotificacaoDAO::editarNotificacao(int idordem, string cpf, string data, string hora, string status)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE Notificacao SET data = ?, hora = ?,status = ? WHERE idordem = ? and cpf = ?");

		preparedStatement->setInt(4, idordem);
		preparedStatement->setString(5, cpf);
		preparedStatement->setString(1, data);
		preparedStatement->setString(2, hora);
		preparedStatement->setString(3, status);
		preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Notificacao** NotificacaoDAO::buscarNotificacao(string data)
{
	string log;
	Notificacao ** n;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT data, hora, status FROM Notificacao WHERE data = ?");
		preparedStatement->setString(1, data);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		n = new Notificacao*[t];
		while (resultSet->next()) {

			n[i] = new Notificacao();
			n[i]->setdata(resultSet->getString(1).c_str());
			n[i]->sethora(resultSet->getString(2).c_str());
			n[i]->setstatus(resultSet->getString(3).c_str());
			i++;
		}
		n[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return n;
}

Notificacao* NotificacaoDAO::buscarNotificacao(int id)
{
	string log;
	Notificacao * n;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT data, hora, status, cpf, idordem FROM Notificacao WHERE idordem = ?");
		preparedStatement->setInt(1, id);

		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		n = new Notificacao();
		if (resultSet->next())
		{

			n = new Notificacao();
			n->setdata(resultSet->getString(1).c_str());
			n->sethora(resultSet->getString(2).c_str());
			n->setstatus(resultSet->getString(3).c_str());
			n->setcpf(CidadaoDAO::buscarCidadao(resultSet->getString(4).c_str()));
			n->setidordem(Ordem_De_ServicoDAO::buscarOrdemDeServico(resultSet->getInt(5)));
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return n;
}

Notificacao** NotificacaoDAO::SelecionarTudo()
{
	string log;
	Notificacao ** n;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT data, hora, status, cpf, idordem from Notificacao");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		n = new Notificacao*[t];
		while (resultSet->next()) {

			n[i] = new Notificacao();
			n[i]->setdata(resultSet->getString(1).c_str());
			n[i]->sethora(resultSet->getString(2).c_str());
			n[i]->setstatus(resultSet->getString(3).c_str());
			n[i]->setcpf(CidadaoDAO::buscarCidadao(resultSet->getString(4).c_str()));
			n[i]->setidordem(Ordem_De_ServicoDAO::buscarOrdemDeServico(resultSet->getInt(5)));
			i++;
		}
		n[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return n;
}


Notificacao** NotificacaoDAO::SelecionarEmEspera()
{
	string log;
	Notificacao ** n;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT data, hora, status, cpf, idordem from Notificacao where status='ESPERA'");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		n = new Notificacao*[t];
		while (resultSet->next()) {

			n[i] = new Notificacao();
			n[i]->setdata(resultSet->getString(1).c_str());
			n[i]->sethora(resultSet->getString(2).c_str());
			n[i]->setstatus(resultSet->getString(3).c_str());
			Cidadao * c = CidadaoDAO::buscarCidadao(resultSet->getString(4));
			Ordem_de_Servico * os = Ordem_De_ServicoDAO::buscarOrdemDeServico(resultSet->getInt(5));
			n[i]->setcpf(c);
			n[i]->setidordem(os);
			i++;
		}
		n[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return n;

}