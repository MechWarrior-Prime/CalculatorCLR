#include "frmMain.h"
#include "functions.h"
#include <algorithm> // very powerful library, esp. for sorts, finds and strange stuff
/*
	Calculator for CLR
	Frank G. Dahncke
	Build 0012
	11-FEB-2020	1.0		creation
	12-FEB-2020	1.1		faculty
	13-FEB-2020 1.2		info window
	13-FEB-2020	1.2.1	input error handling
	20-FEB-2020 1.3		now uses technolibCLR
*/
using namespace System;
using namespace System::Windows::Forms;

[STAThread]//make single threading
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//get app window
	CalculatorCLR::frmMain^ window1 = gcnew CalculatorCLR::frmMain;

	//start app with window1
	Application::Run(window1);
}