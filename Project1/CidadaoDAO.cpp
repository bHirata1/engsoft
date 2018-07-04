#include "CidadaoDAO.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
using namespace std;

CidadaoDAO::CidadaoDAO()
{
}

void CidadaoDAO::criarCidadao(string nome, string canal, string contato, string cpf)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO Cidadao (nome, canal, contato, cpf) VALUES (?,?,?,?)");

		preparedStatement->setString(1, nome);
		preparedStatement->setString(2, canal);
		preparedStatement->setString(3, contato);
		preparedStatement->setString(4, cpf);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void CidadaoDAO::deletarCidadao(string cpf)
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

		preparedStatement->setString(1, cpf);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void CidadaoDAO::editarCidadao(string cpf, string nome, string canal, string contato)
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
		preparedStatement->setString(4, cpf.c_str());
		preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Cidadao* CidadaoDAO::buscarCidadao(string cpf)
{
	string log;
	Cidadao * cidadao = NULL;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nome, canal, contato FROM Cidadao WHERE cpf = ?");
		preparedStatement->setString(1, cpf);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		while (resultSet->next()) {

			cidadao = new Cidadao();
			cidadao->setnome(resultSet->getString(1).c_str());
			cidadao->setcanal(resultSet->getString(2).c_str());
			cidadao->setcontato(resultSet->getString(3).c_str());
			cidadao->setcpf(cpf);
			i++;
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return cidadao;
}

Cidadao** CidadaoDAO::SelecionarTudo()
{
	string log;
	Cidadao ** cidadao;
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
		cidadao = new Cidadao*[t];
		while (resultSet->next()) {

			cidadao[i] = new Cidadao();
			cidadao[i]->setnome(resultSet->getString(1).c_str());
			cidadao[i]->setcanal(resultSet->getString(2).c_str());
			cidadao[i]->setcontato(resultSet->getString(3).c_str());
			cidadao[i]->setcpf(resultSet->getString(4).c_str());
			i++;
		}
		cidadao[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return cidadao;
}

int CidadaoDAO::contarCidadaos()
{
	string log;
	sql::Connection * connection;
	int num;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT count(*) from Cidadao");
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next())
			num = resultSet->getInt(1);
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return num;
}