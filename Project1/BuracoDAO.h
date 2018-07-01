#include "MySQLDAO.h"
#include "Buraco.h"
#include <stdio.h>
using namespace std;

class BuracoDAO
{

public:
	BuracoDAO();
	static void criarBuraco(string nomerua, int numero, string posrel, string regional, int tamanho);
	static void BuracoDAO::deletarBuraco(int idburaco);
	static void BuracoDAO::editarBuraco(int idburaco, string nomerua, int numero, string posrel, string regional, int tamanho);
	static Buraco* BuracoDAO::buscarBuraco(int id);
	static Buraco** BuracoDAO::buscarBuraco(string nomerua);
	static Buraco** BuracoDAO::SelecionarTudo();
};