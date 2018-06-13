#include "Login.h"
#include "DashboardDespachador.h"
#include <iostream>

using namespace std;

using namespace System;
using namespace System::Windows::Forms;


[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	InfoBuraco::MyForm form;
	Application::Run(%form);
}

