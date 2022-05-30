#ifndef __LWL_STDIO_H__
#define __LWL_STDIO_H__
#include <lwl/stdint.h>
#include <lwl/syscall.h>

#define stdin  0
#define stdout 1
#define stderr 2

int lwl_printf(const char* format, ...);

#endif