#include "Ordem_de_Servico.h"

Ordem_de_Servico::Ordem_de_Servico()
{

}

Ordem_de_Servico::~Ordem_de_Servico()
{

}

int Ordem_de_Servico::getidordem()
{
	return this->idordem;
}

void Ordem_de_Servico::setidordem(int id)
{
	this->idordem = id;
}

int Ordem_de_Servico::gethorapessoal()
{
	return this->horapessoal;
}

void Ordem_de_Servico::sethorapessoal(int hora)
{
	this->horapessoal = hora;
}

time_t Ordem_de_Servico::getdata();
{
	return this->data;
}

void Ordem_de_Servico::setdata(time_t data)
{
	this->data = data;
}

int Ordem_de_Servico::getprioridade()
{
	return this->prioridade;
}

void Ordem_de_Servico::setprioridade(int prioridade)
{
	this->prioridade = prioridade;
}

string Ordem_de_Servico::getstatus()
{
	return this->status;
}

void Ordem_de_Servico::setstatus(string status)
{
	this->status = status;
}

Buraco Ordem_de_Servico::getburaco()
{
	return this->buraco;
}

void Ordem_de_Servico::setburaco(Buraco buraco)
{
	this->buraco = buraco;
}