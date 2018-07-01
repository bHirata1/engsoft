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
		preparedStatement = connection->prepareStatement("INSERT INTO OrdemServico (nome, custo) VALUES (?,?)");

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
		preparedStatement = connection->prepareStatement("DELETE FROM OrdemServico WHERE idordem = ?");

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
		preparedStatement = connection->prepareStatement("UPDATE OrdemServico SET nome = ?, custo = ? WHERE idordem = ?");

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
		preparedStatement = connection->prepareStatement("SELECT nome, custo FROM OrdemServico WHERE idordemDeServico = ?");
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
	Ordem_de_Servico ** os;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT data,prioridade,idburaco,status,idordem FROM OrdemServico");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		os = new Ordem_de_Servico*[t];
		while (resultSet->next()) {

			os[i] = new Ordem_de_Servico();
			//os[i]->setdata()
			os[i]->setprioridade(resultSet->getInt(2));
			os[i]->setburaco(BuracoDAO::buscarBuraco(resultSet->getInt(3)));
			os[i]->setstatus(resultSet->getString(4));
			os[i]->setidordem(resultSet->getInt(5));
			i++;
		}
		os[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return os;
}

Ordem_de_Servico** Ordem_De_ServicoDAO::SelecionarAbertas()
{
	string log;
	Ordem_de_Servico ** os;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT data,prioridade,idburaco,idordem,nomerua,numero FROM OrdemServico join Buraco using (idburaco) where status='ABERTA'");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		os = new Ordem_de_Servico*[t];
		while (resultSet->next()) {

			os[i] = new Ordem_de_Servico();
			//os[i]->setdata()
			os[i]->setprioridade(resultSet->getInt(2));
			os[i]->getburaco()->setidburaco(resultSet->getInt(3));
			os[i]->setidordem(resultSet->getInt(4));
			os[i]->getburaco()->setnomerua(resultSet->getString(5));
			os[i]->getburaco()->setnumero(resultSet->getInt(6));
			i++;
		}
		os[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return os;
}


Ordem_de_Servico** Ordem_De_ServicoDAO::buscarOrdemDeServico(string rua)
{
	string log;
	Ordem_de_Servico ** os;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		System::String^ querry;
		preparedStatement = connection->prepareStatement("SELECT data,prioridade,idburaco,idordem,nomerua,numero FROM OrdemServico join Buraco using (idburaco) where status='ABERTA' and nomerua like ?");
		preparedStatement->setString(1, "%"+rua+"%");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		os = new Ordem_de_Servico*[t];
		while (resultSet->next()) {

			os[i] = new Ordem_de_Servico();
			//os[i]->setdata()
			os[i]->setprioridade(resultSet->getInt(2));
			os[i]->getburaco()->setidburaco(resultSet->getInt(3));
			os[i]->setidordem(resultSet->getInt(4));
			os[i]->getburaco()->setnomerua(resultSet->getString(5));
			os[i]->getburaco()->setnumero(resultSet->getInt(6));
			i++;
		}
		os[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return os;
}
