#include "Cidadao.h"

Cidadao::Cidadao() 
{

}

Cidadao::~Cidadao() 
{

}

string Cidadao::getcpf()
{
	return this->cpf;
}

void Cidadao::setcpf(string cpf)
{
	this->cpf = cpf;
}

string Cidadao::getnome()
{
	return this->nome;
}

void Cidadao::setnome(string nome)
{
	this->nome = nome;
}

string Cidadao::getcanal()
{
	return this->canal;
}

void Cidadao::setcanal(string canal)
{
	this->canal = canal;
}

string Cidadao::getcontato()
{
	return this->contato;
}

void Cidadao::setcontato(string contato)
{
	this->contato = contato;
}