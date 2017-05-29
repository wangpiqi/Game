/********************************************************************
	created:	2016/11/09
	created:	9:11:2016   20:34
	filename: 	c:\Users\worldend\Desktop\Game\GameEngine\IEntity.h
	file path:	c:\Users\worldend\Desktop\Game\GameEngine
	file base:	IEntity
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

class IEntity
{
public:
	IEntity(void);
	virtual ~IEntity(void);

public:
	virtual bool Init() = 0;
	virtual bool Run() = 0;
	virtual bool Shut() = 0;

protected:
	int m_nUniqueId;
};
