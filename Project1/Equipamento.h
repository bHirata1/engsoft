#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
#include <string>
#include <iostream>
using namespace std;

class Equipamento
{
private:
	float custo;
	string id;
	string nome;

public:
	Equipamento();
	virtual ~Equipamento();

	float getcusto();
	void setcusto(float c);

	string getnome();
	void setnome(string nome);

	string getid();
	void setid(string id);
};

#endif
