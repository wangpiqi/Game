#include <iostream>
using namespace std;

#include "Adapter.h"

int main()
{
	ClassB* clsB = new ClassB();
	Adapter* pAdapter = new Adapter(clsB);
	pAdapter->FunctionA();
	pAdapter->FunctionB();

	system("pause");
	return 0;
}