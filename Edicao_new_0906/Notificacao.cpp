#include "Notificacao.h"

Notificacao::Notificacao() 
{

}

Notificacao::~Notificacao() 
{

}

time_t Notificacao::getdata()
{
	return this->getdata;
}

void Notificacao::setdata(time_t data)
{
	this->getdata = data;
}

time_t Notificacao::gethora()
{
	return this->gethora;
}

void Notificacao::sethora(time_t hora)
{
	this->hora = hora;
}

int Notificacao::getstatus()
{
	return this->status;
}

void Notificacao::setstatus(int status)
{
	this->status = status;
}

Cidadao Notificacao::getcpf()
{
	return this->cpf;
}
void Notificacao::setcpf(Cidadao cpf)
{
	this->cpf = cpf;
}

Ordem_de_Servico Notificacao::getidordem()
{
	return this->idordem;
}

void Notificacao::setidordem(Ordem_de_Servico idordem)
{
	this->idordem = idordem;
}