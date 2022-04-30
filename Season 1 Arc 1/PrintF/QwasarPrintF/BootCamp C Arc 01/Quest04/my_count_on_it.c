#ifndef STRUCT_STRING_ARRAY //                      STRING ARRAY 
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
                            #endif

#ifndef STRUCT_INTEGER_ARRAY //                  INTERGER ARRAY 
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
                            #endif

integer_array* my_count_on_it(string_array *param_1)
{

    integer_array* ptr = (integer_array*) malloc(sizeof(integer_array));    // do not understand why this is done. 
    ptr->size = param_1->size;
    ptr->array = (int*) malloc(sizeof(int) * param_1->size);

    for (int i = 0; i < param_1->size; i++)                                 //  understand this and below. 
    {
        ptr->array[i] = strlen(param_1->array[i]);
    }
    return ptr;
}
