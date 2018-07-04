#ifndef CIDADAODAO_H
#define CIDADAODAO_H


#include "MySQLDAO.h"
#include "Cidadao.h"
#include <stdio.h>
#include <string>
using namespace std;

class CidadaoDAO
{

public:
	CidadaoDAO();
	static void criarCidadao(string nome, string canal, string contato, string cpf);
	static void deletarCidadao(string cpf);
	static void editarCidadao(string cpf, string nome, string canal, string contato);
	static Cidadao* CidadaoDAO::buscarCidadao(string nome);
	static Cidadao** CidadaoDAO::SelecionarTudo();
	static int contarCidadaos();
};

#endif