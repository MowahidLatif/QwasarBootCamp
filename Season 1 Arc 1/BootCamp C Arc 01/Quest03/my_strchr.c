
char* my_strchr(char* param_1, char param_2)
{

    char* ptr;
    ptr = param_1;

    while (*ptr != '\0') {
        if (*ptr == param_2) {
            return ptr;
        }
        *ptr++;
    }

}

//  loop through the array
//  find the first occurance of that value
//  take that 'spot' and print everything that comes after that 