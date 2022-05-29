#ifndef __LWL_UNISTD_H__
#define __LWL_UNISTD_H__
#include <lwl/stdint.h>

int write(unsigned int fd, const char* buf, size_t count);
int read(unsigned int fd, char* buf, size_t count);

#endif