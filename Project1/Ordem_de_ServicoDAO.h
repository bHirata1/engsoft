#ifndef ORDEM_DE_SERVICODAO_H
#define ORDEM_DE_SERVICODAO_H


#include "MySQLDAO.h"
#include "Ordem_De_Servico.h"
#include <stdio.h>
using namespace std;

class Ordem_De_ServicoDAO
{

public:
	Ordem_De_ServicoDAO();
	static void criarOrdemDeServico(string nome, float custo);
	static void Ordem_De_ServicoDAO::deletarOrdemDeServico(int idordemDeServico);
	static void Ordem_De_ServicoDAO::editarOrdemDeServico(int idordem, string status);
	static void Ordem_De_ServicoDAO::editarOrdemDeServico(int idordem, int p, string status);
	static void Ordem_De_ServicoDAO::editarOrdemDeServico(int idordem, string status, int num, string * mat, float* vol, int horas);
	static Ordem_de_Servico* Ordem_De_ServicoDAO::buscarOrdemDeServico(int idordemDeServico);
	static Ordem_de_Servico** Ordem_De_ServicoDAO::buscarOrdemPorSaida(int idsaida);
	static Ordem_de_Servico** Ordem_De_ServicoDAO::SelecionarTudo();
	static Ordem_de_Servico** Ordem_De_ServicoDAO::SelecionarAbertas();
	static Ordem_de_Servico** Ordem_De_ServicoDAO::SelecionarAgendadas();
	static Ordem_de_Servico** Ordem_De_ServicoDAO::buscarOrdemDeServico(string rua);
	static int Ordem_De_ServicoDAO::contarBuracosAbertos();
	static int Ordem_De_ServicoDAO::contarOrdensAbertas();
	static int Ordem_De_ServicoDAO::contarOrdensAgendadas();
};


#endif
