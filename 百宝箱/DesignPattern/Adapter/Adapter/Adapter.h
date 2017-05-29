#pragma once

#include <iostream>
using namespace std;

class ClassA
{
public:
	virtual void FunctionA(){ cout<<"ClassA FunctionA."<<endl; };
	virtual void FunctionB(){ cout<<"ClassA FunctionB."<<endl; };
};

class ClassB
{
public:
	void FunctionC(){ cout<<"ClassB FunctionC."<<endl; };
	void FunctionD(){ cout<<"ClassB FunctionD."<<endl; };
};

class Adapter : public ClassA
{
public:
	Adapter(void);
	Adapter(ClassB* clsB) :
	m_clsB(clsB){ };

	~Adapter(void);

public:
	void FunctionA(){ m_clsB->FunctionC(); };
	void FunctionB(){ m_clsB->FunctionD(); };

private:
	ClassB* m_clsB;
};
