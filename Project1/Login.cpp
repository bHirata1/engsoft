#include "Login.h"
#include "DashboardAssessor.h"
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