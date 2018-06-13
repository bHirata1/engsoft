#include "EquipeDAO.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
using namespace std;

EquipeDAO::EquipeDAO()
{
}

void EquipeDAO::criarEquipe(string nomeequipe, int tamanho, float custo, string encarregado)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO Equipe (nomeequipe, tamanho, custo, encarregado) VALUES (?,?,?,?)");

		preparedStatement->setString(1, nomeequipe.c_str());
		preparedStatement->setInt(2, tamanho);
		preparedStatement->setDouble(3, custo);
		preparedStatement->setString(4, encarregado.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void EquipeDAO::deletarEquipe(string nomeequipe)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM Equipe WHERE nomeequipe = ?");

		preparedStatement->setString(1, nomeequipe.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void EquipeDAO::editarEquipe(string nomeequipe, int tamanho, float custo, string encarregado)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE Equipe SET tamanho = ?, custo = ?, encarregado = ? WHERE nomeequipe = ?");

		preparedStatement->setInt(1, tamanho);
		preparedStatement->setDouble(2, custo);
		preparedStatement->setString(3, encarregado.c_str());
		preparedStatement->setString(4, nomeequipe.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Equipe* EquipeDAO::buscarEquipe(string nomeequipe)
{
	string log;
	Equipe * equipe;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nomeequipe, tamanho, custo, encarregado FROM Equipe WHERE nomeequipe = ?");

		preparedStatement->setString(1, nomeequipe.c_str());
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			equipe = new Equipe();
			equipe->setnomeequipe(resultSet->getString(1).c_str());
			equipe->settamanho(resultSet->getInt(2));
			equipe->setcusto(resultSet->getDouble(3));
			equipe->setencarregado(resultSet->getString(4).c_str());
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return equipe;
}

Equipe** EquipeDAO::SelecionarTudo()
{
	string log;
	Equipe ** equipe;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nomeequipe, tamanho, custo, encarregado from Equipe");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		equipe = new Equipe*[t];
		while (resultSet->next()) {

			equipe[i] = new Equipe();
			equipe[i]->setnomeequipe(resultSet->getString(1).c_str());
			equipe[i]->settamanho(resultSet->getInt(2));
			equipe[i]->setcusto(resultSet->getDouble(3));
			equipe[i]->setencarregado(resultSet->getString(4).c_str());
			i++;
		}
		equipe[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return equipe;
}