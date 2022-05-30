#include <lwl/unistd.h>

int lwl_read(unsigned int fd, char* buf, size_t count){
    unsigned long arr[] = {fd, buf, count, 0, 0, 0};
    return system_call(0x00, arr);
}

int lwl_write(unsigned int fd, const char* buf, size_t count){
    unsigned long arr[] = {fd, buf, count, 0, 0, 0};
    return system_call(0x01, arr);
}

int lwl_execve(const char* path, char* const argv[], char* const envp[]){
    unsigned long arr[] = {path, argv, envp, 0, 0, 0};
    return system_call(0x3B, arr);
}

int lwl_chdir(const char* path){
    unsigned long arr[] = {path, 0, 0, 0, 0, 0};
    return system_call(0x50, arr);
}

char *lwl_getcwd(char* buf, size_t size){
    unsigned long arr[] = {buf, size, 0, 0, 0, 0};
    return system_call(0x4F, arr);
}