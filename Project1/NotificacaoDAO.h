#include "Notificacao.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
using namespace std;

class NotificacaoDAO
{

public:
	NotificaoDAO();
	static void criarNotificacao(string data, string hora, string status);
	static void NotificacaoDAO::deletarDAO(int idordem);
	static void NotificacaoDAO::editarDAO(int idordem, int cpf, string data, string hora, string status, string cpf, int idordem);
	static Notificacao* NotificacaoDAO::buscarNotificacao(int idordem);
	static Notificacao** NotificacaoDAO::buscarNotificacao(string data);
	static Notificacao** NotificacaoDAO::SelecionarTudo();
};
