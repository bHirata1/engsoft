#include "MySQLDAO.h"
#include "Cidadao.h"
#include <stdio.h>
#include <string>
using namespace std;

class CidadaoDAO
{

public:
	CidadaoDAO();
	static void criarCidadao(string nome, string canal, string contato);
	static void CidadaoDAO::deletarCidadao(int cpf);
	static void CidadaoDAO::editarCidadao(int cpf, string nome, string canal, string contato);
	static Cidadao* CidadaoDAO::buscarCidadao(int cpf);
	static Cidadao** CidadaoDAO::buscarCidadao(string nome);
	static Cidadao** CidadaoDAO::SelecionarTudo();
};