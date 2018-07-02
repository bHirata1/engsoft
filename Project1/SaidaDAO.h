#pragma once
#include "MySQLDAO.h"
#include "Saida.h"
#include "Equipamento.h"
#include "Ordem_de_Servico.h"
#include <stdio.h>
#include "Conv.h"
#include "Ordem_de_ServicoDAO.h"

using namespace std;

ref class SaidaDAO
{
public:
	SaidaDAO();

	static void criarSaida(string data, string equipe, Ordem_de_Servico ** os, Equipamento ** eqp);
	static int SaidaDAO::contarSaidasAgendadas(string login);
	static Saida** SaidaDAO::SelecionarAgendadas(string nome);
};

