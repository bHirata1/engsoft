#include "Equipe.h"

Equipe::Equipe() 
{

}

Equipe::~Equipe() 
{

}

string Equipe::getnomeequipe()
{
	return this->nomeequipe;
}

void Equipe::setnomeequipe(string equipe)
{
	this->nomeequipe = equipe;
}

string Equipe::getencarregado()
{
	return this->encarregado;
}

void Equipe::setencarregado(string encarregado)
{
	this->encarregado = encarregado;
}

int Equipe::gettamanho()
{
	return this->tamanho;
}

void Equipe::settamanho(int tamanho)
{
	this->tamanho = tamanho;
}

float Equipe::getcusto()
{
	return this->custo;
}

void Equipe::setcusto(float custo)
{
	this->custo = custo;
}