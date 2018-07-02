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

string Saida::getdata()
{
	return this->data;
}

void Saida::setdata(string data)
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

string Saida::getnomeequipe()
{
	return this->nomeequipe;
}

void Saida::setnomeequipe(string nome)
{
	this->nomeequipe = nome;
}