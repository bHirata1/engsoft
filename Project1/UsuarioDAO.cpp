#include "UsuarioDAO.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
using namespace std;

UsuarioDAO::UsuarioDAO()
{
}

void UsuarioDAO::criarUsuario(string login, string senha, int tipo, string regional)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO Usuario (login, senha, tipo, regional) VALUES (?,?,?,?)");

		preparedStatement->setString(1, login.c_str());
		preparedStatement->setString(2, senha.c_str());
		preparedStatement->setInt(3, tipo);
		preparedStatement->setString(4, regional.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void UsuarioDAO::deletarUsuario(string login)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM Usuario WHERE login = ?");

		preparedStatement->setString(1, login.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void UsuarioDAO::editarUsuario(string login, string senha, int tipo, string regional)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE Usuario SET senha = ?, tipo = ?, regional = ? WHERE login = ?");

		preparedStatement->setString(1, senha.c_str());
		preparedStatement->setInt(2, tipo);
		preparedStatement->setString(3, regional.c_str());
		preparedStatement->setString(4, login.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Usuario* UsuarioDAO::buscarUsuario(string login)
{
	string log;
	Usuario * usuario = NULL;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT senha, tipo, regional FROM Usuario WHERE login = ?");

		preparedStatement->setString(1, login.c_str());
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			usuario = new Usuario();
			usuario->setlogin(login);
			usuario->setsenha(resultSet->getString(1).c_str());
			usuario->settipo(resultSet->getInt(2));
			usuario->setregional(resultSet->getString(3).c_str());
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return usuario;
}

Usuario** UsuarioDAO::buscarUsuario(int tipo)
{
	string log;
	Usuario ** usuario;
	int t, i = 0;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT login FROM Usuario WHERE tipo = ?");
		preparedStatement->setInt(1, tipo);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		usuario = new Usuario*[t];
		while (resultSet->next()) {
			usuario[i] = new Usuario();
			usuario[i]->setlogin(resultSet->getString(1).c_str());
			i++;
		}
		usuario[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return usuario;
}

Usuario** UsuarioDAO::SelecionarTudo()
{
	string log;
	Usuario ** usuario;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT login, senha, tipo, regional FROM Usuario");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		usuario = new Usuario*[t];
		while (resultSet->next()) {

			usuario[i] = new Usuario();
			usuario[i]->setlogin(resultSet->getString(1).c_str());
			usuario[i]->setsenha(resultSet->getString(2).c_str());
			usuario[i]->settipo(resultSet->getInt(3));
			usuario[i]->setregional(resultSet->getString(4).c_str());
			i++;
		}
		usuario[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return usuario;
}