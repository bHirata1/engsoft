#include "Ordem_De_ServicoDAO.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
#include "BuracoDAO.h"
using namespace std;

Ordem_De_ServicoDAO::Ordem_De_ServicoDAO()
{
}

void Ordem_De_ServicoDAO::criarOrdemDeServico(string nome, float custo)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO OrdemDeServico (nome, custo) VALUES (?,?)");

		preparedStatement->setString(1, nome.c_str());
		preparedStatement->setDouble(2, custo);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void Ordem_De_ServicoDAO::deletarOrdemDeServico(int idordemDeServico)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM OrdemDeServico WHERE idordemDeServico = ?");

		preparedStatement->setInt(1, idordemDeServico);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void Ordem_De_ServicoDAO::editarOrdemDeServico(string nome, float custo, int idordemDeServico)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE OrdemDeServico SET nome = ?, custo = ? WHERE idordemDeServico = ?");

		preparedStatement->setString(1, nome.c_str());
		preparedStatement->setDouble(2, custo);
		preparedStatement->setInt(3, idordemDeServico);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Ordem_de_Servico* Ordem_De_ServicoDAO::buscarOrdemDeServico(int idordemDeServico)
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
		preparedStatement = connection->prepareStatement("SELECT nome, custo FROM OrdemDeServico WHERE idordemDeServico = ?");

		preparedStatement->setInt(1, idordemDeServico);
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			ordemDeServico = new Ordem_de_Servico();
			//ordemDeServico->(resultSet->getString(1).c_str());
			//ordemDeServico->setcusto(resultSet->getDouble(2));
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return ordemDeServico;
}

Ordem_de_Servico** Ordem_De_ServicoDAO::SelecionarTudo()
{
	string log;
	Ordem_de_Servico ** ordemDeServico;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nome, custo FROM OrdemDeServico");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		ordemDeServico = new Ordem_de_Servico*[t];
		while (resultSet->next()) {

			ordemDeServico[i] = new Ordem_de_Servico();
			//ordemDeServico[i]->setnome(resultSet->getString(1).c_str());
			//ordemDeServico[i]->setcusto(resultSet->getDouble(2));
			i++;
		}
		ordemDeServico[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return ordemDeServico;
}