#ifndef _EVENT_DEFINE_H_
#define _EVENT_DEFINE_H_

#pragma once

#include "FastDelegate.h"
#include "Variant\VarList.h"

typedef fastdelegate::FastDelegate2<const char*, VarList&, void> EventDelegate;
typedef std::map<std::string, EventDelegate> EventDelegateMap;

#endif