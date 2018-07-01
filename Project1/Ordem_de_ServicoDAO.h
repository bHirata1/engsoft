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
	static void Ordem_De_ServicoDAO::editarOrdemDeServico(string nome, float custo, int idordemDeServico);
	static Ordem_de_Servico* Ordem_De_ServicoDAO::buscarOrdemDeServico(int idordemDeServico);
	static Ordem_de_Servico** Ordem_De_ServicoDAO::SelecionarTudo();
	static Ordem_de_Servico** Ordem_De_ServicoDAO::SelecionarAbertas();
	static Ordem_de_Servico** Ordem_De_ServicoDAO::buscarOrdemDeServico(string rua);
};