#include "EquipamentoDAO.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
using namespace std;

EquipamentoDAO::EquipamentoDAO()
{
}

void EquipamentoDAO::criarEquipamento(string id, string nome, float custo)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO Equipamento (idequipamento, nome, custo) VALUES (?,?,?)");
		preparedStatement->setString(1, id.c_str());
		preparedStatement->setString(2, nome.c_str());
		preparedStatement->setDouble(3, custo);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void EquipamentoDAO::deletarEquipamento(string idequipamento)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM Equipamento WHERE idequipamento = ?");

		preparedStatement->setString(1, idequipamento.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void EquipamentoDAO::editarEquipamento(string nome, float custo, string idequipamento)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE Equipamento SET nome = ?, custo = ? WHERE idequipamento = ?");

		preparedStatement->setString(1, nome.c_str());
		preparedStatement->setDouble(2, custo);
		preparedStatement->setString(3, idequipamento.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Equipamento* EquipamentoDAO::buscarEquipamento(string idequipamento)
{
	string log;
	Equipamento * equipamento;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nome, custo FROM Equipamento WHERE idequipamento = ?");

		preparedStatement->setString(1, idequipamento.c_str());
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			equipamento = new Equipamento();
			equipamento->setnome(resultSet->getString(1).c_str());
			equipamento->setcusto(resultSet->getDouble(2));
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return equipamento;
}

Equipamento** EquipamentoDAO::SelecionarTudo()
{
	string log;
	Equipamento ** equipamento;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT idequipamento,nome, custo FROM Equipamento");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		equipamento = new Equipamento*[t];
		while (resultSet->next()) {

			equipamento[i] = new Equipamento();
			equipamento[i]->setid(resultSet->getString(1).c_str());
			equipamento[i]->setnome(resultSet->getString(2).c_str());
			equipamento[i]->setcusto(resultSet->getDouble(3));
			i++;
		}
		equipamento[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return equipamento;
}