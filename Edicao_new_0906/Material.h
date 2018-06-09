#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>
#include <string>
using namespace std;

class Material
{
private:
	string nomematerial;
	string unidademedida;
	float custo;

public:
	Material();
	virtual ~Material();

	string getnomematerial();
	void setnomematerial(string nome);

	string getunidademedida();
	void setunidademedida(string unidade);

	float getcusto();
	void setcusto(float custo);
}

#endif
