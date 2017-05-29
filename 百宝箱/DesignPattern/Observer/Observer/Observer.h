/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   17:18
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Observer\Observer\Observer.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Observer\Observer
	file base:	Observer
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

//#include "Subject.h"

//class Subject;

class Observer
{
public:
	Observer(void);
	//Observer(Subject* pSubject);
	virtual ~Observer(void);

public:
	virtual void Update(int nData1, int nData2, int nData3){ };
};
