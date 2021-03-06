/********************************************************************
	created:	2016/11/09
	created:	9:11:2016   20:55
	filename: 	c:\Users\worldend\Desktop\Game\Public\Singleton.h
	file path:	c:\Users\worldend\Desktop\Game\Public
	file base:	Singleton
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <stdio.h>

template <class T>
class Singleton
{
protected:
	Singleton(){ };
	virtual ~Singleton(){ };

	Singleton(const Singleton&){ };
	Singleton& operator = (const Singleton&){ };

public:
	static T* GetSingleton()
	{
		if (s_pInstance == NULL)
		{
			s_pInstance = new T();
		}
		return s_pInstance;
	}

	/*virtual bool Init() = 0;
	virtual bool Run() = 0;
	virtual bool Shut() = 0;*/

	virtual bool Init(){ return true; };
	virtual bool Run(){ return true; };
	virtual bool Shut(){ return true; };

protected:
	static T* s_pInstance;
};

template <class T>
T* Singleton<T>::s_pInstance = NULL;

#endif
