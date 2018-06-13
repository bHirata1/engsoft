#ifndef EQUIPE_H
#define EQUIPE_H

#include <iostream>
#include <string>
using namespace std;

class Equipe()
{
private:
	string nomeequipe;
	string encarregado;
	int tamanho;
	float custo;

public:
	Equipe();
	virtual ~Equipe();

	string getnomeequipe();
	void setnomeequipe(string equipe);

	string getencarregado();
	void setencarregado(string encarregado);

	int gettamanho();
	void settamanho(int tamanho);

	float getcusto();
	void setcusto(float custo);
}

#endif
