#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
#include <string>
#include <iostream>
using namespace std;

class Equipamento
{
private:
	int idequipamento;
	string nome;

public:
	Equipamento();
	virtual ~Equipamento();

	int getidequipamento();
	void setidequipamento(int id);

	string getnome();
	void setnome(string nome);
};

#endif
