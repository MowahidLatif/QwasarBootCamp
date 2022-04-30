#include <stdio.h>
#include <stdlib.h>

int* my_range(int param_1, int param_2)
{
    int* ptr1  = (int*)malloc(sizeof(int));

    int i = param_1;
    int k = 0;

    while (i < param_2) {
        ptr1[k] = i;
        k++;
        i++;
    }
    return ptr1;

}