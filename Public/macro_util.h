/********************************************************************
	created:	2016/11/09
	created:	9:11:2016   20:22
	filename: 	c:\Users\worldend\Desktop\Game\Public\macro_util.h
	file path:	c:\Users\worldend\Desktop\Game\Public
	file base:	macro_util
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#ifndef _MACRO_UTIL_H_
#define _MACRO_UTIL_H_

#define CLASS_NAME L"Game"
#define WINDOW_NAME L"Game"

#define WINDOW_LEFT 0
#define WINDOW_TOP 0
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define FULL_SCREEN FALSE

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)\
	if ((p) != NULL)\
{\
	delete (p);\
	(p) = NULL;\
}
#endif

#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(p)\
	if ((p) != NULL)\
{\
	delete [] (p);\
	(p) = NULL;\
}
#endif

#ifndef NULL_RETURN_VOID
#define NULL_RETURN_VOID(p)\
if ((p) == NULL)\
{\
	return;\
}
#endif

#ifndef NULL_RETURN
#define NULL_RETURN(p, value)\
	if ((p) == NULL)\
{\
	return (value);\
}
#endif

#ifndef SAFE_RELEASE
#define SAFE_RELEASE(p)\
if ((p) != NULL)\
{\
	(p)->Release();\
}
#endif

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) sizeof(a)/sizeof(*a)
#endif

#endif
