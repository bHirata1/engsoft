#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H

#include "java/sql/Time.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class Ordem_de_Servico; //Dependency Generated Source:Notificacao Target:Ordem_de_Servico
class Cidadao; //Dependency Generated Source:Notificacao Target:Cidadao

class Notificacao
{
private:
	time_t data;
	time_t hora;
	int status;
	Cidadao cpf;
	Ordem_de_Servico idordem;

public:
	Notificacao();
	virtual ~Notificacao;

	time_t getdata();
	void setdata(time_t data);

	time_t gethora();
	void sethora(time_t hora);

	int getstatus();
	void setstatus(int status);

	Cidadao getcpf();
	void setcpf(Cidadao cpf);

	Ordem_de_Servico getidordem();
	void setidordem(Ordem_de_Servico idordem);
}

#endif
