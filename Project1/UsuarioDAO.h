#include "MySQLDAO.h"
#include "Usuario.h"
#include <stdio.h>
using namespace std;

class UsuarioDAO
{

public:
	UsuarioDAO();
	static void criarUsuario(string login, string senha, int tipo, string regional);
	static void UsuarioDAO::deletarUsuario(string login);
	static void UsuarioDAO::editarUsuario(string login, string senha, int tipo, string regional);
	static Usuario* UsuarioDAO::buscarUsuario(string login);
	static Usuario** UsuarioDAO::SelecionarTudo();
};