#ifndef CUSTO_H
#define CUSTO_H

#include <iostream>
#include <string>
using namespace std;

class Custo
{
private:
	float valor;

public:
	Custo();
	virtual ~Custo();

	float getvalor();
	void setvalor(float valor);
};

#endif
