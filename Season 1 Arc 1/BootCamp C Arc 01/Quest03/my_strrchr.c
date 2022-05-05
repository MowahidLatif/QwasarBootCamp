char* my_strrchr(char* param_1, char param_2)
{
    char* ptr;
    ptr = param_1;
    char* ptr2;

    while (*ptr != '\0') {
        if (*ptr == param_2) {
            ptr2++;
        } else {}
        *ptr++;
    }
}


    // char* ptr;
    // ptr = param_1;

    // int x = (strlen(param_1) - 1);
    // int y = 0;

    // while (y > x) {
        
    //     y--;
    // }