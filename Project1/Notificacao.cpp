#include "Notificacao.h"

Notificacao::Notificacao() 
{

}

Notificacao::~Notificacao() 
{

}

string Notificacao::getdata()
{
	return this->data;
}

void Notificacao::setdata(string data)
{
	this->data = data;
}

string Notificacao::gethora()
{
	return this->hora;
}

void Notificacao::sethora(string hora)
{
	this->hora = hora;
}

string Notificacao::getstatus()
{
	return this->status;
}

void Notificacao::setstatus(string status)
{
	this->status = status;
}

Cidadao* Notificacao::getcpf()
{
	return this->cidadao;
}
void Notificacao::setcpf(Cidadao* cpf)
{
	this->cidadao = cpf;
}

Ordem_de_Servico* Notificacao::getidordem()
{
	return this->ordem;
}

void Notificacao::setidordem(Ordem_de_Servico* idordem)
{
	this->ordem = idordem;
}