#include "Screen1.h"
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]



void main()
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	VacationPlanner::Screen1 frm;
	Application::Run(% frm);

}