#include "Material.h"

Material::Material() 
{

}

Material::~Material() 
{

}

string getnomematerial()
{
	return this->nomematerial;
}

void setnomematerial(string nome)
{
	this->nomematerial = nome;
}

string getunidademedida()
{
	return this->unidademedida;
}

void setunidademedida(string unidade)
{
	this->unidademedida = unidade;
}

float getcusto()
{
	return this->custo;
}

void setcusto(float custo)
{
	this->custo = custo;
}
