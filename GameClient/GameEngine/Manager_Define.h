#pragma once

#ifndef CREATE_CLASS
#define CREATE_CLASS(Cls)\
Cls* Create##Cls(const char* szName, VarList& args)\
{\
	Cls* p##Cls = new Cls();\
	p##Cls->Create(args);\
	m_##Cls##Map.insert(std::make_pair(szName, p##Cls));\
	return p##Cls;\
}
#endif