#include "MyForm1.h"
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]



void main()
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	LearnGUI::MyForm frm;
	Application::Run(% frm);

}