#include "common.h"

void osSetTime(OSTime ticks) {
    __osCurrentTime = ticks;
}
