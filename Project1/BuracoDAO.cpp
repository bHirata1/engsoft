#include "BuracoDAO.h"

BuracoDAO::BuracoDAO()
{
}

void BuracoDAO::criarBuraco(string nomerua, int numero, string posrel, string regional, int tamanho, string cpf)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO Buraco (nomerua, numero, posrel, regional, tamanho) VALUES (?,?,?,?,?)");

		preparedStatement->setString(1, nomerua.c_str());
		preparedStatement->setInt(2, numero);
		preparedStatement->setString(3, posrel.c_str());
		preparedStatement->setString(4, regional.c_str());
		preparedStatement->setInt(5, tamanho);
		resultSet = preparedStatement->executeQuery();

		preparedStatement = connection->prepareStatement("select max(idburaco) from Buraco");
		resultSet = preparedStatement->executeQuery();
		if (!resultSet->next()) return;
		int id = resultSet->getInt(1);
		int p = tamanho / 2;
		if (posrel == "Meio da rua") p += 3;
		if (p >= 8) p = 8;

		preparedStatement = connection->prepareStatement("insert into OrdemServico (data,prioridade,status,idburaco) values (?,?,'ABERTA',?)");
		
		System::DateTime dt;
		string data = to_string(dt.Now.Year) + "-" + to_string(dt.Now.Month) + "-" + to_string(dt.Now.Day);
		string hora = to_string(dt.Now.Hour) + ":" + to_string(dt.Now.Minute) + ":" + to_string(dt.Now.Second);
		preparedStatement->setString(1,data);
		preparedStatement->setInt(2,1);
		preparedStatement->setInt(3,id);
		preparedStatement->executeQuery();

		preparedStatement = connection->prepareStatement("select max(idordem) from OrdemServico");
		resultSet = preparedStatement->executeQuery();
		if (!resultSet->next()) return;
		id = resultSet->getInt(1);

		preparedStatement = connection->prepareStatement("insert into Notificacao (data,hora,status,cpf,idordem) values (?,?,'ESPERA',?,?)");
		preparedStatement->setString(1, data);
		preparedStatement->setString(2, hora);
		preparedStatement->setString(3, cpf);
		preparedStatement->setInt(4, id);
		preparedStatement->executeQuery();
		
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void BuracoDAO::deletarBuraco(int idburaco)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM Buraco WHERE idburaco = ?");

		preparedStatement->setInt(1, idburaco);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void BuracoDAO::editarBuraco(int idburaco, string nomerua, int numero, string posrel, string regional,  int tamanho)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE Buraco SET nomerua = ?, numero = ?, posrel = ?, regional = ?,tamanho = ? WHERE idburaco = ?");

		preparedStatement->setString(1, nomerua.c_str());
		preparedStatement->setInt(2, numero);
		preparedStatement->setString(3, posrel.c_str());
		preparedStatement->setString(4, regional.c_str());
		preparedStatement->setInt(5, tamanho);
		preparedStatement->setInt(6, idburaco);		
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

Buraco** BuracoDAO::buscarBuraco(string nomerua)
{
	string log;
	Buraco ** buraco;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		nomerua = "%" + nomerua + "%";
		preparedStatement = connection->prepareStatement("SELECT nomerua, numero, posrel, regional, tamanho, idburaco FROM Buraco WHERE nomerua like ?");
		preparedStatement->setString(1, nomerua);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		buraco = new Buraco*[t];
		while (resultSet->next()) {

			buraco[i] = new Buraco();
			buraco[i]->setnomerua(resultSet->getString(1).c_str());
			buraco[i]->setnumero(resultSet->getInt(2));
			buraco[i]->setposrel(resultSet->getString(3).c_str());
			buraco[i]->setregional(resultSet->getString(4).c_str());
			buraco[i]->settamanho(resultSet->getInt(5));
			buraco[i]->setidburaco(resultSet->getInt(6));
			i++;
		}
		buraco[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return buraco;
}

Buraco* BuracoDAO::buscarBuraco(int id)
{
	string log;
	Buraco * buraco;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nomerua, numero, posrel, regional, tamanho FROM Buraco WHERE idburaco = ?");
		preparedStatement->setInt(1, id);
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		buraco = new Buraco();
		if(resultSet->next())
		{

			buraco= new Buraco();
			buraco->setnomerua(resultSet->getString(1).c_str());
			buraco->setnumero(resultSet->getInt(2));
			buraco->setposrel(resultSet->getString(3).c_str());
			buraco->setregional(resultSet->getString(4).c_str());
			buraco->settamanho(resultSet->getInt(5));
			buraco->setidburaco(id);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return buraco;
}

Buraco** BuracoDAO::SelecionarTudo()
{
	string log;
	Buraco ** buraco;
	sql::Connection * connection;
	int i = 0, t;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nomerua, numero, posrel, regional, tamanho, idburaco from Buraco");
		resultSet = preparedStatement->executeQuery();
		t = resultSet->rowsCount() + 1;
		buraco = new Buraco*[t];
		while (resultSet->next()) {

			buraco[i] = new Buraco();
			buraco[i]->setnomerua(resultSet->getString(1).c_str());
			buraco[i]->setnumero(resultSet->getInt(2));
			buraco[i]->setposrel(resultSet->getString(3).c_str());
			buraco[i]->setregional(resultSet->getString(4).c_str());
			buraco[i]->settamanho(resultSet->getInt(5));
			buraco[i]->setidburaco(resultSet->getInt(6));
			i++;
		}
		buraco[i] = NULL;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return buraco;
}