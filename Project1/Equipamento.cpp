#include "Equipamento.h"

Equipamento::Equipamento()
{

}

Equipamento::~Equipamento()
{

}

float Equipamento::getcusto()
{
	return custo;
}
void Equipamento::setcusto(float id)
{
	this->custo = id;
}

string Equipamento::getnome()
{
	return this->nome;
}

void Equipamento::setnome(string nome)
{
	this->nome = nome;
}

string Equipamento::getid()
{
	return this->id;
}

void Equipamento::setid(string id)
{
	this->id = id;
}



