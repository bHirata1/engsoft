#ifndef SAIDA_H
#define SAIDA_H

using namespace std;
#include <string>
#include "Equipe.h"
#include "Equipamento.h"
#include "Material.h"
#include "Custo.h"
#include <ctime>
using namespace std;

class Saida
{
private:
	int idsaida;
	string data;
	float distanciapercorrida;
	string nomeequipe;

public:
	Saida();
	virtual ~Saida();

	int getidsaida();
	void setidsaida(int id);

	string getdata();
	void setdata(string data);

	float getdistanciapercorrida();
	void setdistanciapercorrida(float distancia);

	string getnomeequipe();
	void setnomeequipe(string nome);
};


#endif