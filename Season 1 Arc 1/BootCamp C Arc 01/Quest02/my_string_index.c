
int my_string_index(char* param_1, char param_2)

{
    char* ptr;
    int counter = 0;
    ptr = param_1;

    while (*ptr != '\0') {
        if (*ptr == param_2) {
            counter++;
        }
        ptr++;

        }
        if (counter == 0) {
            counter = -1;
    } 
    return counter;
}


//  param_1[counter] != "\0"
//  gandalf ex08