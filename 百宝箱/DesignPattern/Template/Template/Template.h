#pragma once

#include <iostream>
using namespace std;

class Template
{
public:
	Template(void);
	~Template(void);

public:
	void TemplateMethod()
	{
		Operation1();
		Operation2();
	};

	virtual void Operation1(){ cout<<"Template Operation1."<<endl; };
	virtual void Operation2(){ cout<<"Template Operation2."<<endl; };
};

class TemplateChildA : public Template
{
public:
	void Operation1(){ cout<<"TemplateChildA Operation1."<<endl; };
	void Operation2(){ cout<<"TemplateChildA Operation2."<<endl; };
};

class TemplateChildB : public Template
{
public:
	void Operation1(){ cout<<"TemplateChildB Operation1."<<endl; };
	void Operation2(){ cout<<"TemplateChildB Operation2."<<endl; };
};
