#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

bool my_is_sort(integer_array* param_1)
{
    int num;
    if (param_1->size > 0) {
        if (param_1->array[num] >= param_1->array[num + 1]) {
            num++;
            return true;
        } else {
            return false;
        }
    }
    else {
        return true;
    }

}



// integer_array_variable->size 
//     will give you the size of the array
// integer_array_variable->array 
//     will give you the access to the array
// integer_array_variable->array[0] => 
//     is the first cell of the array

// {
//     int num;
//     int index;

//     for (int i = 0; i < param_1->size; i++) {
//         if (param_1->array[index] >= param_1->array[index + 1] || param_1->array[index] != param_1->array[0]) {
//             return true;
//         } 
//         else {
//             return false;
//         }
//     }
// }