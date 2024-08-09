#include "MyForm.h"
#include <Windows.h>
//#include <iostream>

//#include "BaseClass.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]



void APPLICATION_START() {
	using namespace std;

	system("color 70");
	cout << "\n APPLICATION START\n\n";
	cout << "  Statistic:\n\n";

	
	/*BaseClass obj_BC;
	obj_BC.set_name("Gavka");
	cout << "\t" << obj_BC.piNa(3.0f) << endl;*/






	cout << "\n\n";
}
void APPLICATION_FORM() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Training3::MyForm form;
	Application::Run(% form);
}
void APPLICATION_END() {
	std::cout << "\nAPPLICATION END\n\n";
	system("pause");
}



// ver 0.0.0
int main(array<String^>^ args) {
	APPLICATION_START();
	APPLICATION_FORM();
	APPLICATION_END();
	return 0;
}