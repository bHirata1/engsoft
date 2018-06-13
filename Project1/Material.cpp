#include "Material.h"

Material::Material() 
{

}

Material::~Material() 
{

}

string Material::getnomematerial()
{
	return this->nomematerial;
}

void Material::setnomematerial(string nome)
{
	this->nomematerial = nome;
}

string Material::getunidademedida()
{
	return this->unidademedida;
}

void Material::setunidademedida(string unidade)
{
	this->unidademedida = unidade;
}

float Material::getcusto()
{
	return this->custo;
}

void Material::setcusto(float custo)
{
	this->custo = custo;
}
