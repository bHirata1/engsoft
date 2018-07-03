#include "Notificacao.h"
#include <stdio.h>
#include "MySQLDAO.h"
#include <string>
#include "CidadaoDAO.h"
#include "Ordem_de_ServicoDAO.h"
using namespace std;

class NotificacaoDAO
{

public:
	NotificacaoDAO();
	static void criarNotificacao(string data, string hora, string status);
	static void deletarNotificacao(int idordem);
	static void editarNotificacao(int idordem, string cpf, string data, string hora, string status);
	static Notificacao* NotificacaoDAO::buscarNotificacao(int idordem);
	static Notificacao** NotificacaoDAO::buscarNotificacao(string data);
	static Notificacao** NotificacaoDAO::SelecionarTudo();
	static Notificacao** NotificacaoDAO::SelecionarEmEspera();
};
