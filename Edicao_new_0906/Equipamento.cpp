#include "Equipamento.h"

Equipamento::Equipamento()
{

}

virtual Equipamento::~Equipamento();
{

}

int Equipamento::getidequipamento();
{
	return this->idequipamento();
}
void Equipamento::setidequipamento(int id)
{
	this->idequipamento = id;
}

string Equipamento::getnome()
{
	return this->nome;
}

void Equipamento::setnome(string nome)
{
	this->nome = nome;
}

