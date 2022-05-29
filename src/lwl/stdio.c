#include <lwl/stdio.h>
#include <lwl/stdint.h>
#include <lwl/unistd.h>
#include <lwl/string.h>
#include <lwl/stdarg.h>

int printf(const char* format, ...) {
    va_list arg;
    int i;
    int len = strlen(format);
    va_start(arg, format);
    for(i = 0; i < len; i++) {
        if(format[i] == '%'){
            switch(format[i+1]){
            case 'c':
                va_arg(arg, char);
            }
        }
    }
    return 0;
}