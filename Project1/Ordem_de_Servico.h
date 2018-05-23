#ifndef ORDEM_DE_SERVICO_H
#define ORDEM_DE_SERVICO_H

#include "XSDDataTypes/time.h"
#include "Material.h"
#include "java/sql/Time.h"
#include <iostream>
#include <ctime>
using namespace std;

class Ordem_de_Servico
{
private:
	int idordem;
	int horapessoal;
	time_t data;
	int prioridade;
	string status;
	Buraco buraco;

public:
	Ordem_de_Servico();
	virtual ~Ordem_de_Servico();

	int getidordem();
	void setidordem(int id);

	int gethorapessoal();
	void sethorapessoal(int hora);

	time_t getdata();
	void setdata(time_t data);

	int getprioridade();
	void setprioridade(int prioridade);

	string getstatus();
	void setstatus(string status);

	Buraco getburaco();
	void setburaco(Buraco buraco);
}

#endif

