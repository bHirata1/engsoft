#include "Notificacao.h"

Notificacao::Notificacao() 
{

}

Notificacao::~Notificacao() 
{

}

time_t Notificacao::getdata()
{
	return this->data;
}

void Notificacao::setdata(time_t data)
{
	this->data = data;
}

time_t Notificacao::gethora()
{
	return this->hora;
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
	return this->cidadao;
}
void Notificacao::setcpf(Cidadao cpf)
{
	this->cidadao = cpf;
}

Ordem_de_Servico Notificacao::getidordem()
{
	return this->ordem;
}

void Notificacao::setidordem(Ordem_de_Servico idordem)
{
	this->ordem = idordem;
}