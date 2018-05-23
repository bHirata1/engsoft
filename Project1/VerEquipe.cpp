#include "VerEquipe.h"
#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	InfoBuraco::DashboardDespachador form;
	Application::Run(%form);
}
