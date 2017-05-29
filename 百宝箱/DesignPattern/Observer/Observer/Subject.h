/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   17:19
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Observer\Observer\Subject.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Observer\Observer
	file base:	Subject
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <list>
using namespace std;

#include "Observer.h"

class Subject
{
public:
	Subject(void);
	virtual ~Subject(void);

public:
	void RegisterObserver(Observer* pObserver);
	void RemoveObserver(Observer* pObserver);
	virtual void NotifyObservers();
	virtual void DataChanged();

protected:
	std::list<Observer*> m_pObserverList;
};
