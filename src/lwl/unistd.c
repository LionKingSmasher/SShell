#include <lwl/unistd.h>

int read(unsigned int fd, char* buf, size_t count){
    unsigned long arr[] = {fd, buf, count, 0, 0, 0};
    return system_call(0x00, arr);
}

int write(unsigned int fd, const char* buf, size_t count){
    unsigned long arr[] = {fd, buf, count, 0, 0, 0};
    return system_call(0x01, arr);
}