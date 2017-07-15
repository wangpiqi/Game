#include "EntityB.h"
#include "macro_util.h"

EntityB::EntityB(void)
{
	REG_EVENT("on_test", &EntityB::Func);
}

EntityB::~EntityB(void)
{
}
