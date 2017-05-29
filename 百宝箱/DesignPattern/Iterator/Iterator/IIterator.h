#pragma once

class Component;

class Iterator
{
public:
	Iterator(void);
	~Iterator(void);

public:
	virtual bool HasNext(){ return false; };
	virtual int Next(){ return 0; };
	virtual Component* Next(int nValue){ return NULL; };
	virtual void Remove(){ };
};