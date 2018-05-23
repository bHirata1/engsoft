#ifndef BURACO_H
#define BURACO_H
//Begin section for file Buraco.h
//TODO: Add definitions that you want preserved
//End section for file Buraco.h
#include "Foto.h"
#include <iostream>
using namespace std;





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
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
		   
public:
	Buraco();
	virtual ~Buraco();
	
	int getidburaco();
	void setidburaco(int id);

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
