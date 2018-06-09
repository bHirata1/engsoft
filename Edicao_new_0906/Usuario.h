#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
using namespace std;

class Usuario
{
private:
	string login;
	strign senha;
	int tipo;
	string regional;

public:
	Usuario();
	virtual ~Usuario();

	string getlogin();
	void setlogin(string login);

	string getsenha();
	void setsenha(string senha);

	int gettipo();
	void settipo(int tipo);

	string getregional();
	void setregional(string regional);
}

#endif
