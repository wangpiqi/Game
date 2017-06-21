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
#include "VarList.h"

int main()
{
#pragma region
	Variant v;
	v = 11037;
	cout<<v.IntVal()<<" "<<v.GetType()<<" "<<sizeof(Variant)<<endl;

	VarList list;
	list << 1 << 2;
	cout<<list.IntVal(0)<<" "<<list.IntVal(1)<<endl;
#pragma endregion

	system("pause");
	return 0;
}
