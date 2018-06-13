#include "MySQLDAO.h"
#include "Equipamento.h"
#include <stdio.h>
using namespace std;

class EquipamentoDAO
{

public:
	EquipamentoDAO();
	static void criarEquipamento(string nome, float custo);
	static void EquipamentoDAO::deletarEquipamento(int idequipamento);
	static void EquipamentoDAO::editarEquipamento(string nome, float custo, int idequipamento);
	static Equipamento* EquipamentoDAO::buscarEquipamento(int idequipamento);
	static Equipamento** EquipamentoDAO::SelecionarTudo();
};