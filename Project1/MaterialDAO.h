#include "MySQLDAO.h"
#include "Material.h"
#include <stdio.h>
using namespace std;

class MaterialDAO
{

public:
	MaterialDAO();
	static void criarMaterial(string nomematerial, string unidademedida, float custo);
	static void MaterialDAO::deletarMaterial(string nomematerial);
	static void MaterialDAO::editarMaterial(string nomematerial, string unidademedida, float custo);
	static Material* MaterialDAO::buscarMaterial(string nomematerial);
	static Material** MaterialDAO::SelecionarTudo();
};