#ifndef _MACROS_H_
#define _MACROS_H_

#define true 1
#define false 0

#ifndef __sgi
#define GLOBAL_ASM(...)
#endif

#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

#define SQ(x) ((x) * (x))
#define ROUND(x) (s32)(((x) >= 0.0) ? ((x) + 0.5) : ((x) - 0.5))

#define assert

#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

#define ALIGN4(val) (((val) + 0x3) & ~0x3)
#define ALIGN8(val) (((val) + 0x7) & ~0x7)
#define ALIGN16(val) (((val) + 0xF) & ~0xF)

#endif
