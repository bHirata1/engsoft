#include "MySQLDAO.h"
#include "Equipe.h"
#include <stdio.h>
using namespace std;

class EquipeDAO
{

public:
	EquipeDAO();
	static void criarEquipe(string nomeequipe, int tamanho, float custo, string encarregado);
	static void EquipeDAO::deletarEquipe(string nomeEquipe);
	static void EquipeDAO::editarEquipe(string nomeEquipe, int tamanho, float custo, string encarregado);
	static Equipe* EquipeDAO::buscarEquipe(string nomeEquipe);
	static Equipe** EquipeDAO::SelecionarTudo();
};