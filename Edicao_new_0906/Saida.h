#ifndef SAIDA_H
#define SAIDA_H
using namespace std;
#include <string>
#include "Equipe.h"
#include "Equipamento.h"
#include "Material.h"
#include "Custo.h"
#include "Encarregado.h"
#include <ctime>
using namespace std;

class Saida
{
private:
	int idsaida;
	time_t data;
	float distanciapercorrida;
	Equipe nomeequipe;

public:
	Saida();
	virtual ~Saida();

	int getidsaida();
	void setidsaida(int id);

	time_t getdata();
	void setdata(time_t data);

	float getdistanciapercorrida();
	void setdistanciapercorrida(float distancia);

	Equipe getnomeequipe();
	void setnomeequipe(Equipe nome);
};
#endif
