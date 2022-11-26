#include "os.h"

extern OSTime __osCurrentTime;

void osSetTime(OSTime ticks) {
    __osCurrentTime = ticks;
}
