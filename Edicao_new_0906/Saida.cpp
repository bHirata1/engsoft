#include "Saida.h"
using namespace std;
#include <string>

Saida::Saida()
{

}

Saida::~Saida()
{

}

int Saida::getidsaida()
{
	return this->idsaida;
}

void Saida::setidsaida(int id)
{
	this->idsaida = id;
}

time_t Saida::getdata()
{
	return this->data;
}

void Saida::setdata(time_t data)
{
	this->data = data;
}

float Saida::getdistanciapercorrida()
{
	return this->distanciapercorrida;
}

void Saida::setdistanciapercorrida(float distancia)
{
	this->distanciapercorrida = distancia;
}

Equipe Saida::getnomeequipe()
{
	return this->nomeequipe;
}

void Saida::setnomeequipe(Equipe nome)
{
	this->nomeequipe = nome;
}