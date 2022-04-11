#include <stdarg.h>
#include <unistd.h>

int my_printf_aux( char *format, va_list ap, int len);

int my_putchar(int c) {
    char a[1];
    a[0] = (char)c;
    write(0, a, 1);
    return 0;
}

 int my_converter(unsigned long n, unsigned int base,  char *digits) {
    int res = 1;
    if (n >= base) {
        res += my_converter(n / base, base, digits);
    }
    my_putchar(digits[n % base]);
    return res;
}

 int my_print_d( char *format, va_list ap, int len) {
    int n = va_arg(ap, int);
    unsigned long long u;
        if (n < 0) {
            my_putchar('-');
            len++;
            u = -(unsigned)n;
        } else {
            u = n;
        }
    len += my_converter(u, 10, "0123456789");
    return my_printf_aux(format, ap, len);
}

 int my_print_o( char *format, va_list ap, int len) {
    unsigned int n = va_arg(ap, unsigned int);
    len += my_converter(n, 8, "01234567");
    return my_printf_aux(format, ap, len);
}

 int my_print_u( char *format, va_list ap, int len) {
    unsigned int n = va_arg(ap, unsigned int);
    len += my_converter(n, 10, "0123456789");
    return my_printf_aux(format, ap, len);
}

 int my_print_x( char *format, va_list ap, int len) {
    unsigned int n = va_arg(ap, unsigned int);
    len += my_converter(n, 16, "0123456789abcdef");
    return my_printf_aux(format, ap, len);
}

int my_print_c( char *format, va_list ap, int len) {
   int c = va_arg(ap, int);
   my_putchar(c);
   return my_printf_aux(format, ap, len + 1);
}

 int my_print_s( char *format, va_list ap, int len) {
     char *s = va_arg(ap,  char *);
    if (s == NULL) {
        s = "(null)";
    }
    while (*s) {
        my_putchar(*s++);
        len++;
    }
    return my_printf_aux(format, ap, len);
}

 int my_print_p( char *format, va_list ap, int len) {
      char *p = va_arg(ap,  char *);
     if (p == NULL) {
         p = "(null)";
     }
     while (*p) {
         my_putchar(*p++);
         len++;
     }
     len += my_converter(*p, 16, "0123456789abcdef");
     return my_printf_aux(format, ap, len);
 }

typedef int (*my_print_dispatch_f)
( char *format, va_list ap, int len);

 my_print_dispatch_f  my_print_dispatch[256] = {
    ['d'] = my_print_d,
    ['o'] = my_print_o,
    ['u'] = my_print_u,
    ['x'] = my_print_x,
    ['c'] = my_print_c,
    ['s'] = my_print_s,
    ['p'] = my_print_p,
 };

 int my_printf_aux( char *format, va_list ap, int len) {
    int c;
    while (*format) {
        c = (unsigned char)*format++;
        if (c != '%') {
            my_putchar(c);
            len++;
        } else {
            c = (unsigned char)*format++;
            if (my_print_dispatch[c] == NULL) {
                if (c == '\0')
                    break;
                my_putchar(c);
                len++;
            } else {
                return my_print_dispatch[c](format, ap, len);
            }
        }
    }
    return len;
}

  int my_vprintf( char *format, va_list ap) {
      return my_printf_aux(format, ap, 0);
  }

int my_printf( char *format, ...) {
    va_list ap;
    int n;
    va_start(ap, format);
    n = my_printf_aux(format, ap, 0);
    va_end(ap);
    return n;
}

int main(int argc, char *argv[]) {
    my_printf("Hello word\n");
    my_printf("%cello %s\n", 'H', "word");
    my_printf("%d == 0%o == 0x%x == 0x%X\n", 1, 1, 1, 1);
    my_printf("%d == 0%o == 0x%x == 0x%X\n", 123, 123, 123, 123);
    int result;
    result = my_printf("Testing return value!\n");
    my_printf("Total printed characters are: %d\n", result);
    return 0;
}
