#include "MaterialDAO.h"
#include "Material.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
using namespace std;

MaterialDAO::MaterialDAO()
{
}

void MaterialDAO::criarMaterial(string nomematerial, string unidademedida, int custo)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO material (nomematerial, unidademedida, custo) VALUES (?,?,?)");

		preparedStatement->setString(1, nomematerial.c_str());
		preparedStatement->setString(2, unidademedida.c_str());
		preparedStatement->setInt(3, custo);
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
		preparedStatement = connection->prepareStatement("DELETE FROM material WHERE nomematerial = ?");

		preparedStatement->setString(1, nomematerial.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void MaterialDAO::editarMaterial(string nomematerial, string unidademedida, int custo)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE material SET unidademedida = ?, custo = ? WHERE nomematerial = ?");
				
		preparedStatement->setString(1, unidademedida.c_str);
		preparedStatement->setInt(2, custo);
		preparedStatement->setString(3, nomematerial.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Material MaterialDAO::buscarMaterial(string nomematerial)
{
	string log;
	Material * material = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nomematerial, unidademedida, custo FROM material WHERE nomematerial = ?");

		preparedStatement->setString(1, nomematerial.c_str());
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			material = new Material();
			material->setNomeMaterial(resultSet->getString(1).c_str());
			material->setUnidadeMedida(resultSet->getInt(2));	
			material->setCusto(resultSet->getInt(3));
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return material;
}

