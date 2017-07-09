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

extern int TestFastDelegate(void);

int main()
{
#pragma region
	/*Variant v;
	v = 11037;
	cout<<v.IntVal()<<" "<<v.GetType()<<" "<<sizeof(Variant)<<endl;

	VarList list;
	list << 22 << 50 << 11 << "Hello!";
	cout<<list.IntVal(0)<<" "<<list.GetType(0)
		<<" "<<list.IntVal(1)<<" "<<list.GetType(1)
		<<" "<<list.IntVal(2)<<" "<<list.GetType(2)
		<<" "<<list.StringVal(3)<<" "<<list.GetType(3)
		<<" "<<list.IntVal(4)<<" "<<list.GetType(4)<<endl;*/
#pragma endregion

#pragma region

	TestFastDelegate();

#pragma endregion

	system("pause");
	return 0;
}
