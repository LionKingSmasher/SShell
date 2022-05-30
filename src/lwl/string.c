#include <lwl/string.h>

char lwl_strcmp(const char* __s1, const char* __s2){
    int len_s1 = lwl_strlen(__s1);
    int len_s2 = lwl_strlen(__s2);
    int len = (len_s1 > len_s2) ? len_s1 : len_s2;
    int i;

    for(i = 0; i < len; i++){
        if(__s1[i] > __s2[i]) return 1;
        if(__s1[i] < __s2[i]) return -1;
    }

    return 0;
}

size_t lwl_strlen(const char* str){
    int result = 0;
    while(str[result++]);
    return result;
}

char* lwl_strcpy(char* dest, char* origin){
    int dest_length = strlen(dest);
    int origin_length = strlen(origin);
    int len = (dest_length < origin_length) ? dest_length : origin_length;
    for(int i = 0; i < len; i++)
        dest[i] = origin[i];
    return dest;
}

int lwl_atoi(char* str){
    int result = 0;
    int i;
    int len = strlen(str);
    for(i = 0; i < len; i++){
        if(str[i] & 0xC0)
            return 0;
        result = (result * 10) + (str[i] & 0x0f);
    }
    return result;
}

char* lwl_itoa(int __i, char* __s){
    int i;
    int cnt = 0;
    for(i=__i; i > 0; i /= 10){
        __s[cnt] = 0x30 | (i % 10);
        cnt++;
    }
    return __s;
}