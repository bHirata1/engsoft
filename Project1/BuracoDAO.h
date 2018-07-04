#ifndef BURACODAO_H
#define BURACODAO_H

#include "MySQLDAO.h"
#include "Buraco.h"
#include "Ordem_de_ServicoDAO.h"
#include "NotificacaoDAO.h"
#include <stdio.h>
using namespace std;

class BuracoDAO
{

public:
	BuracoDAO();
	static void criarBuraco(string nomerua, int numero, string posrel, string regional, int tamanho, string cpf);
	static void BuracoDAO::deletarBuraco(int idburaco);
	static void BuracoDAO::editarBuraco(int idburaco, string nomerua, int numero, string posrel, string regional, int tamanho);
	static Buraco* BuracoDAO::buscarBuraco(int id);
	static Buraco** BuracoDAO::buscarBuraco(string nomerua);
	static Buraco** BuracoDAO::buscarBuraco(string nomerua, int numero);
	static Buraco** BuracoDAO::SelecionarTudo();
};

#endif