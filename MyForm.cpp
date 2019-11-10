#include "MyForm.h"

using namespace Project1;
[System::STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm());
	return 0;
}
