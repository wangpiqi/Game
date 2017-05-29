#include <iostream>
using namespace std;

#include "Template.h"

int main()
{
	Template* pTemplate = new TemplateChildA();
	pTemplate->TemplateMethod();
	pTemplate = new TemplateChildB();
	pTemplate->TemplateMethod();

	system("pause");
	return 0;
}