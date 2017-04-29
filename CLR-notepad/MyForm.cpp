#include "MyForm.h"
using namespace CLRnotepad;
int main()
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm());
	return 0;
}