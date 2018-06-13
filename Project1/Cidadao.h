#ifndef CIDADAO_H
#define CIDADAO_H

#include <iostream>
#include <string>
using namespace std;

class Cidadao
{
private:
	string cpf;
	string nome;
	string canal;
	string contato;

public:
	Cidadao();
	virtual ~Cidadao();

	string getcpf();
	void setcpf(string cpf);

	string getnome();
	void setnome(string nome);

	string getcanal();
	void setcanal(string canal);

	string getcontato();
	void setcontato(string contato);
};

#endif
