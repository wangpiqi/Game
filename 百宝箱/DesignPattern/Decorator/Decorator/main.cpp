/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   23:12
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Decorate\Decorate\main.cpp
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Decorate\Decorate
	file base:	main
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include <iostream>
using namespace std;

#include "Decorator.h"
#include "ConcreteComponent.h"

class ConcreteDecoratorA : public Decorator
{
public:
	ConcreteDecoratorA(Component* pComponent){ m_pComponent = pComponent; };

public:
	virtual string MethodA(){ return m_pComponent->MethodA() + "ConcreteDecoratorA MethodA."; };
	virtual int MethodB(){ return (m_pComponent->MethodB() + 10); };

//private:
//	Component wrappedObj;
};

class ConcreteDecoratorB : public Decorator
{
public:
	ConcreteDecoratorB(Component* pComponent){ m_pComponent = pComponent; };

public:
	virtual string MethodA(){ return m_pComponent->MethodA() + "ConcreteDecoratorB MethodA."; };
	virtual int MethodB(){ return (m_pComponent->MethodB() + 20); };

//private:
//	Component wrappedObj;
};

int main()
{
	/*Component* pComponent = new ConcreteComponent();
	pComponent = new ConcreteDecoratorA(pComponent);
	pComponent = new ConcreteDecoratorB(pComponent);
	string strMethodA = pComponent->MethodA();
	int nMethodB = pComponent->MethodB();*/

	ConcreteComponent component;
	ConcreteDecoratorA componentA = ConcreteDecoratorA(&component);
	ConcreteDecoratorB componentB = ConcreteDecoratorB(&componentA);
	string strMethodA = componentB.MethodA();
	int nMethodB = componentB.MethodB();

	cout<<strMethodA.c_str()<<"\t"<<nMethodB<<endl;

	_CrtDumpMemoryLeaks();

	system("pause");
	return 0;
}
