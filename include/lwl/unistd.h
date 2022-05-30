#ifndef __LWL_UNISTD_H__
#define __LWL_UNISTD_H__
#include <lwl/stdint.h>
#include <lwl/syscall.h>

int   lwl_write(unsigned int fd, const char* buf, size_t count);
int   lwl_read(unsigned int fd, char* buf, size_t count);
int   lwl_execve(const char* path, char* const argv[], char* const envp[]);
int   lwl_chdir(const char*);
char* lwl_getcwd(char*, size_t);

#endif