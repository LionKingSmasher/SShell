#include <lwl/stdio.h>
#include <lwl/stdint.h>
#include <lwl/unistd.h>
#include <lwl/string.h>
#include <lwl/stdarg.h>

int lwl_printf(const char* format, ...) {
    va_list arg;
    int i;
    int len = lwl_strlen(format);
    va_start(arg, format);
    for(i = 0; i < len; i++) {
        if(format[i] == '%'){
            i+=1;
            switch(format[i]){
            case 'c':
                {
                    char __c = va_arg(arg, int);
                    lwl_write(stdout, &__c, 1);
                }
                break;
            case 's':
                {
                    int len = 0;
                    char* __s = va_arg(arg, char*);
                    len = lwl_strlen(__s);
                    lwl_write(stdout, __s, len);
                }
                break;
            case 'd' :
                {
                    char str[20] = {0,};
                    int __i = va_arg(arg, int);
                    int len = 0;
                    lwl_itoa(__i, str);
                    len = lwl_strlen(str);
                    lwl_write(stdout, str, len);
                }
                break;
            }
        }
        lwl_write(stdout, (format+i), 1);
    }
    va_end(arg);
    return 0;
}