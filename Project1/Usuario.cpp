#include "Usuario.h"

Usuario::Usuario() 
{

}

Usuario::~Usuario() 
{

}

string Usuario::getlogin()
{
	return this->login;
}

void Usuario::setlogin(string login)
{
	this->login = login;
}

string Usuario::getsenha()
{
	return this->senha;
}

void Usuario::setsenha(string senha)
{
	this->senha = senha;
}

int Usuario::gettipo()
{
	return this->tipo;
}

void Usuario::settipo(int tipo)
{
	this->tipo = tipo;
}

string Usuario::getregional()
{
	return this->regional;
}

void Usuario::setregional(string regional)
{
	this->regional = regional;
}
