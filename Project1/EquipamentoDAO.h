#ifndef EQUIPAMENTODAO_H
#define EQUIPAMENTODAO_H

#include "MySQLDAO.h"
#include "Equipamento.h"
#include <stdio.h>
using namespace std;

class EquipamentoDAO
{

public:
	EquipamentoDAO();
	static void criarEquipamento(string id, string nome, float custo);
	static void EquipamentoDAO::deletarEquipamento(string idequipamento);
	static void EquipamentoDAO::editarEquipamento(string nome, float custo, string idequipamento);
	static Equipamento* EquipamentoDAO::buscarEquipamento(string idequipamento);
	static Equipamento** EquipamentoDAO::buscarEquipamento(int idsaida);
	static Equipamento** EquipamentoDAO::SelecionarTudo();
};

#endif