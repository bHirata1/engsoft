#include "MaterialDAO.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
using namespace std;

MaterialDAO::MaterialDAO()
{
}

void MaterialDAO::criarMaterial(string nomematerial, string unidademedida, float custo)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO Material (nomematerial, unidademedida, custo) VALUES (?,?,?)");

		preparedStatement->setString(1, nomematerial.c_str());
		preparedStatement->setString(2, unidademedida.c_str());
		preparedStatement->setDouble(3, custo);
		resultSet = preparedStatement->executeQuery();		
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void MaterialDAO::deletarMaterial(string nomematerial)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM Material WHERE nomematerial = ?");

		preparedStatement->setString(1, nomematerial.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void MaterialDAO::editarMaterial(string nomematerial, string unidademedida, float custo)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE Material SET unidademedida = ?, custo = ? WHERE nomematerial = ?");
				
		preparedStatement->setString(1, unidademedida.c_str());
		preparedStatement->setDouble(2, custo);
		preparedStatement->setString(3, nomematerial.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Material* MaterialDAO::buscarMaterial(string nomematerial)
{
	string log;
	Material * material;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nomematerial, unidademedida, custo FROM Material WHERE nomematerial = ?");

		preparedStatement->setString(1, nomematerial.c_str());
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			material = new Material();
			material->setnomematerial(resultSet->getString(1).c_str());
			material->setunidademedida(resultSet->getString(2).c_str());
			material->setcusto(resultSet->getInt(3));
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return material;
}

Material** MaterialDAO::SelecionarTudo()
{
	string log;
	Material ** material;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nomematerial,unidademedida,custo from Material");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		material = new Material*[t];
		while (resultSet->next()) {

			material[i] = new Material();
			material[i]->setnomematerial(resultSet->getString(1).c_str());
			material[i]->setunidademedida(resultSet->getString(2).c_str());
			material[i]->setcusto(resultSet->getInt(3));
			i++;
		}
		material[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return material;
}

