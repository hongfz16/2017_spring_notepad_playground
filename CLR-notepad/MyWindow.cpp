#include "MyWindow.h"
using namespace CLRnotepad;
[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MyWindow());
	return 0;
}
