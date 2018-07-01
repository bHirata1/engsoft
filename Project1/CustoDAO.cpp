#include "CustoDAO.h"



CustoDAO::CustoDAO()
{
}

void CustoDAO::setCusto(float valor)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE Custo set valor = ?");
		preparedStatement->setDouble(1, valor);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return;
}

float CustoDAO::getCusto()
{
	string log;
	float v;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT valor from Custo");
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next())
			v = resultSet->getDouble(1);
		else
			v = 0;
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return v;
}
