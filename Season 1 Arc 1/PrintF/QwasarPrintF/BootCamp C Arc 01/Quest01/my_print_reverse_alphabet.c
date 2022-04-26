#include <unistd.h>

void my_putchar(char ch) {
  write(1, &ch, 1);
}

void my_print_reverse_alphabet()
{
  char c;

  for (c = 'z' ; c >= 'a' ; c--) {
      my_putchar(c);
  }
    my_putchar('\n');
}