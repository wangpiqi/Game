/********************************************************************
	created:	2017/06/17
	created:	17:6:2017   19:20
	filename: 	d:\Users\worldend\Desktop\Game GitHub\∞Ÿ±¶œ‰\GameTool\GameTool\test.cpp
	file path:	d:\Users\worldend\Desktop\Game GitHub\∞Ÿ±¶œ‰\GameTool\GameTool
	file base:	test
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include <iostream>
using namespace std;

#include "Variant.h"

int main()
{
	Variant v;
	v.vdata.intVal = 1;
	v.vt = VTYPE_INT;

	cout<<v.IntVal()<<endl;

	system("pause");
	return 0;
}
