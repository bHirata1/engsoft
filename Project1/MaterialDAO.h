#include "MySQLDAO.h"
#include "Material.h"
#include <stdio.h>
using namespace std;

class MaterialDAO
{

public:
	MaterialDAO();
	void MaterialDAO::criarMaterial(string nomematerial, string unidademedida, int custo);
	void MaterialDAO::deletarMaterial(string nomematerial);
	void MaterialDAO::editarMaterial(string nomematerial, string unidademedida, int custo);
	Material* MaterialDAO::buscarMaterial(string nomematerial);
};