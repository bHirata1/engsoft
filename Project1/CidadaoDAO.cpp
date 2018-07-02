#include "CidadaoDAO.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
using namespace std;

CidadaoDAO::CidadaoDAO()
{
}

void CidadaoDAO::criarCidadao(string nome, string canal, string contato)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO Cidadao (nome, canal, contato) VALUES (?,?,?)");

		preparedStatement->setString(1, nome.c_str());
		preparedStatement->setString(2, canal.c_str());
		preparedStatement->setString(3, contato.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void CidadaoDAO::deletarCidadao(int cpf)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM Cidadao WHERE cpf = ?");

		preparedStatement->setInt(1, cpf);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void CidadaoDAO::editarCidadao(int cpf, string nome, string canal, string contato)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE Cidadao SET nome = ?, canal = ?, contato = ? WHERE cpf = ?");

		preparedStatement->setString(1, nome.c_str());
		preparedStatement->setString(2, canal.c_str());
		preparedStatement->setString(3, contato.c_str());
		preparedStatement->setInt(4, cpf);
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Cidadao** CidadaoDAO::buscarCidadao(string nome)
{
	string log;
	Cidadao ** Cidadao;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nome, canal, contato FROM Cidadao WHERE nome = ?");
		preparedStatement->setString(1, nome);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		Cidadao = new Cidadao*[t];
		while (resultSet->next()) {

			Cidadao[i] = new Cidadao();
			Cidadao[i]->setnome(resultSet->getString(1).c_str());
			Cidadao[i]->setcanal(resultSet->getSring(2).c_str());
			Cidadao[i]->setcontato(resultSet->getString(3).c_str());
			i++;
		}
		Cidadao[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return Cidadao;
}

Cidadao* CidadaoDAO::buscarCidadao(int cpf)
{
	string log;
	Cidadao * Cidadao;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nome, canal, contato FROM Cidadao WHERE cpf = ?");
		preparedStatement->setInt(1, cpf);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		Cidadao = new Cidadao();
		if (resultSet->next())
		{

			Cidadao = new Cidadao();
			Cidadao->setnome(resultSet->getString(1).c_str());
			Cidadao->setcanal (resultSet->getString(2).c_str());
			Cidadao->setcontato(resultSet->getString(3).c_str());
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return Cidadao;
}

Cidadao** CidadaoDAO::SelecionarTudo()
{
	string log;
	Cidadao ** Cidadao;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nome, canal, contato, cpf from Cidadao");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		Cidadao = new Cidadao*[t];
		while (resultSet->next()) {

			Cidadao[i] = new Cidadao();
			Cidadao[i]->setnome(resultSet->getString(1).c_str());
			Cidadao[i]->setcanal(resultSet->getString(2).c_str());
			Cidadao[i]->setcontato(resultSet->getString(3).c_str());
			Cidadao[i]->setcpf(resultSet->getInt(4));
			i++;
		}
		Cidadao[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return Cidadao;
}