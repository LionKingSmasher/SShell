#ifndef __LWL_STRING_H__
#define __LWL_STRING_H__
#include <lwl/stdint.h>
char   lwl_strcmp(const char*, const char*);
size_t lwl_strlen(const char*);
char*  lwl_strcpy(char*, char*);
int    lwl_atoi(char*);
char*  lwl_itoa(int, char* buf);
#endif