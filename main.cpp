#include "frmMain.h"

/*
	Calculator for CLR
	Frank G. Dahncke
	11-FEB-2020	1.0	creation
	12-FEB-2020	1.1	faculty
*/
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