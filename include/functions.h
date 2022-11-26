#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "fzerox.h"

void osSetTime(OSTime ticks);
u32 osGetCount(void);
s32 __osDisableInt(void);
void __osRestoreInt(s32);

#endif
