#include "Ordem_De_ServicoDAO.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include "Material.h"
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

void Ordem_De_ServicoDAO::editarOrdemDeServico(int idordem, string status, int num, string * mat, float* vol, int horas)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE OrdemServico SET status = ?, horapessoal = ? WHERE idordem = ?");

		preparedStatement->setString(1, status.c_str());
		preparedStatement->setInt(2, horas);
		preparedStatement->setInt(3, idordem);
		resultSet = preparedStatement->executeQuery();
	
		int i;
		for (i=0; i< num; i++)
		{
			preparedStatement = connection->prepareStatement("INSERT into MaterialOS (quantidade,nomematerial,idordem) values (?,?,?)");
			preparedStatement->setDouble(1, vol[i]);
			preparedStatement->setString(2, mat[i].c_str());
			preparedStatement->setInt(3, idordem);
			resultSet = preparedStatement->executeQuery();
		}

	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void Ordem_De_ServicoDAO::editarOrdemDeServico(int idordem, string status)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE OrdemServico SET status = ? WHERE idordem = ?");
		preparedStatement->setString(1, status.c_str());
		preparedStatement->setInt(2, idordem);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void Ordem_De_ServicoDAO::editarOrdemDeServico(int idordem, int p, string status)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE OrdemServico SET prioridade = ?, status=? WHERE idordem = ?");
		preparedStatement->setInt(1, p);
		preparedStatement->setString(2, status);
		preparedStatement->setInt(3, idordem);
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
	Ordem_de_Servico * os;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select horapessoal,data,prioridade,status,idburaco from OrdemServico where idordem=?");
		preparedStatement->setInt(1, idordemDeServico);
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			os = new Ordem_de_Servico();
			os->sethorapessoal(resultSet->getInt(1));
			os->setdata(resultSet->getString(2));
			os->setprioridade(resultSet->getInt(3));
			os->setstatus(resultSet->getString(4));
			Buraco * b = BuracoDAO::buscarBuraco(resultSet->getInt(5));
			os->setburaco(b);
			os->setidordem(idordemDeServico);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return os;
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
		preparedStatement = connection->prepareStatement("SELECT data,prioridade,idburaco,idordem,nomerua,numero FROM OrdemServico join Buraco using (idburaco) where status='ABERTA' or status='ADIADA'");
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

Ordem_de_Servico** Ordem_De_ServicoDAO::SelecionarAgendadas()
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
		preparedStatement = connection->prepareStatement("SELECT data,prioridade,idburaco,idordem,nomerua,numero FROM OrdemServico join Buraco using (idburaco) where status='AGENDADA'");
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


int Ordem_De_ServicoDAO::contarOrdensAbertas()
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
		preparedStatement = connection->prepareStatement("SELECT count(*) FROM OrdemServico where status='ABERTA'");
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			return resultSet->getInt(1);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return 0;
}

int Ordem_De_ServicoDAO::contarOrdensAgendadas()
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
		preparedStatement = connection->prepareStatement("SELECT count(*) FROM OrdemServico where status='AGENDADA'");
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			return resultSet->getInt(1);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return 0;
}

int Ordem_De_ServicoDAO::contarBuracosAbertos()
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
		preparedStatement = connection->prepareStatement("SELECT count(*) FROM OrdemServico where status='ABERTA' or status='AGENDADA'");
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			return resultSet->getInt(1);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return 0;
}

Ordem_de_Servico** Ordem_De_ServicoDAO::buscarOrdemPorSaida(int idsaida)
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
		preparedStatement = connection->prepareStatement("SELECT data,OrdemServico.prioridade,idburaco,idordem,nomerua,numero from OrdemServico join SaidaOS using (idordem) join Buraco using (idburaco) where idsaida=? and OrdemServico.status = 'AGENDADA'");
		preparedStatement->setInt(1, idsaida);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		os = new Ordem_de_Servico*[t];
		while (resultSet->next()) {

			os[i] = new Ordem_de_Servico();
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