#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
                            #endif

#ifndef PRINTCHAR
#define PRINTCHAR
char my_putchar(char c) {
  return write(1, &c, 1);
}
                            #endif

#ifndef PRINTSTRING
#define PRINTSTRING
char* my_putstr(char* param_1)
{
    char i = 0;
    while (param_1[i] != '\0') {
        my_putchar(param_1[i]);
        i++;
    }
}
                             #endif

void my_print_words_array(string_array* param_1) {

    int index = 0;
    int num = 0;
    while (num < param_1->size) {
        my_putstr(param_1->array[index]);
        my_putstr("\n");
        index++;
        num++;
    }
}
