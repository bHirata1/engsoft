#include "Login.h"
#include "DashboardDespachador.h"
/*
namespace Project1 {
	using namespace System;
	using namespace System::Windows::Forms;
	[STAThread]
	void main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		//Application::Run(gcnew DashboardAssessor);
		Application::Run(gcnew Login)
		
	}
}

*/

using namespace System;
using namespace System::Windows::Forms;


[STAThread]

void main(array<string^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	InfoBuraco::DashboardDespachador form;
	Application::Run(%form);
}