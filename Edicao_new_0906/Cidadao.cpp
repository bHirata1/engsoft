#include "Cidadao.h"

Cidadao::Cidadao() 
{

}

Cidadao::~Cidadao() 
{

}

string getcpf()
{
	return this->cpf;
}

void setcpf(string cpf)
{
	this->cpf = cpf;
}

string getnome()
{
	return this->nome;
}

void setnome(string nome)
{
	this->nome = nome;
}

string getcanal()
{
	return this->canal;
}

void setcanal(string canal)
{
	this->canal = canal;
}

string getcontato()
{
	return this->contato;
}

void setcontato(string contato)
{
	this->contato = contato;
}