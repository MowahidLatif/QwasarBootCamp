#include <unistd.h>

void my_putchar(char ch) {
  write(1, &ch, 1);
}

void my_print_alphabet() {
  char c;

  for (c = 'a' ; c <= 'z' ; c++) {
      my_putchar(c);
  }
    my_putchar('\n');
}
