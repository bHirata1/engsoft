#include "NotificacaoDAO.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
using namespace std;

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

void NotificacaoDAO::editarNotificacao(int idordem, int cpf, strimg data, string hora, string status
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE Notificacao SET idordem = ?, cpf = ?, data = ?, hora = ?,status = ? WHERE idordem = ?");

		preparedStatement->setInt(1, idordem);
		preparedStatement->setInt(2, cpf);
		preparedStatement->setString(3, data.c_str());
		preparedStatement->setString(4, hora.c_str());
		preparedStatement->setString(5, status.~basic_string());
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
	Notificacao ** Notificacao;
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
		Notificacao = new Notificacao*[t];
		while (resultSet->next()) {

			Notificacao[i] = new Notificacao();
			Notificacao[i]->setdata(resultSet->getString(1).c_str());
			Notificacao[i]->sethora(resultSet->getString(2).c_str());
			Notificacao[i]->setstatus(resultSet->getString(3).c_str());
			i++;
		}
		Notificacao[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return Notificacao;
}

Notificacao* NotificacaoDAO::buscarNotificacao(int idordem)
{
	string log;
	Notificacao * Notificacao;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT data, hora, status FROM Notificacao WHERE idordem = ?");
		preparedStatement->setInt(1, id);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		Notificacao = new Notificacao();
		if (resultSet->next())
		{

			Notificacao = new Notificacao();
			Notificacao->setdata(resultSet->getString(1).c_str());
			Notificacao->sethora(resultSet->getString(2).c_str());
			Notificacao->setstatus(resultSet->getString(3).c_str());
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return Notificacao;
}

Notificacao** NotificacaoDAO::SelecionarTudo()
{
	string log;
	Notificacao ** Notificacao;
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
		Notificacao = new Notificacao*[t];
		while (resultSet->next()) {

			Notificacao[i] = new Notificacao();
			Notificacao[i]->setdata(resultSet->getString(1).c_str());
			Notificacao[i]->sethora(resultSet->getString(2).c_str());
			Notificacao[i]->setstatus(resultSet->getString(3).c_str());
			Notificacao[i]->setcpf(resultSet->getInt(5));
			Notificacao[i]->setidordem(resultSet->getInt(5));
			i++;
		}
		Notificacao[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return Notificacao;
}