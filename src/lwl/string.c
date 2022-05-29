#include <lwl/string.h>

size_t strlen(const char* str){
    int result = 0;
    while(str[result++]);
    return result;
}

char* strcpy(char* dest, char* origin){
    int dest_length = strlen(dest);
    int origin_length = strlen(origin);
    int len = (dest_length < origin_length) ? dest_length : origin_length;
    for(int i = 0; i < len; i++)
        dest[i] = origin[i];
    return dest;
}