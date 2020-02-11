#include "frmMain.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//get app window
	CalculatorCLR::frmMain^ window1 = gcnew CalculatorCLR::frmMain;

	//start app with window1
	Application::Run(window1);
}