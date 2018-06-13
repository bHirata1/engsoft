#ifndef BURACO_H
#define BURACO_H

//#include "Foto.h"
#include <iostream>
using namespace std;

class Buraco
{
private:
	int idburaco;
	string nomerua;
	int numero;
	string posrel;
	string regional;
	int reclamacoes;
	int idordem;
	int tamanho;
		   
public:
	Buraco();
	virtual ~Buraco();
	
	int getidburaco();
	void setidburaco(int id);

	int gettamanho();
	void settamanho(int tamanho);

	string getnomerua();
	void setnomerua(string nome);

	int getnumero();
	void setnumero(int num);

	string getposrel();
	void setposrel(string pos);

	string getregional();
	void setregional(string regional);

	int getreclamacoes();
	void setreclamacoes(int reclamacoes);

	int getidordem();
	void setidordem(int id);

};  //end class Buraco



#endif
