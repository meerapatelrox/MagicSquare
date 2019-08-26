#include "MyForm.h"

//1. Copy and paste all the following lines into the .cpp file
//   of the start-up Windows form of a Visual C++ project.

//2. Change 'Project1' in the last line to your project name and
//   also change 'MyForm' in the last line to the form name you 
//   added into the project, if you don't accept its default name.

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MagicSquare::MyForm);
}