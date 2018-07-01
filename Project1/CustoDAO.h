#pragma once
#include "MySQLDAO.h"

ref class CustoDAO
{
public:
	CustoDAO();
	static float getCusto();
	static void setCusto(float valor);
};

