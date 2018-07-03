#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H

//#include "java/sql/Time.h"
#include <iostream>
#include "Cidadao.h"
#include "Ordem_de_Servico.h"
#include <ctime>
#include <string>
using namespace std;

//class Ordem_de_Servico; //Dependency Generated Source:Notificacao Target:Ordem_de_Servico
//class Cidadao; //Dependency Generated Source:Notificacao Target:Cidadao

class Notificacao
{
private:
	string data;
	string hora;
	string status;
	Cidadao *cidadao;
	Ordem_de_Servico *ordem;

public:
	Notificacao();
	virtual ~Notificacao();

	string getdata();
	void setdata(string data);

	string gethora();
	void sethora(string hora);

	string getstatus();
	void setstatus(string status);

	Cidadao* getcpf();
	void setcpf(Cidadao*cpf);

	Ordem_de_Servico* getidordem();
	void setidordem(Ordem_de_Servico* idordem);
};

#endif
