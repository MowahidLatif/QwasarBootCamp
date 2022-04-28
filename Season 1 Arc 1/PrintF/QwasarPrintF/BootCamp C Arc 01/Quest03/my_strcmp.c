
int my_strcmp(char* param_1, char* param_2)
{
//    char *a, *b;
//   int counter = 0;
//    a = param_1;
//    b = param_2;

    for (int x = 0; x < strlen(param_1); x++) {
        for (int y = 0; y < strlen(param_2); y++) {
            if (param_1[x] == param_2[y]) {
                return 0;
            } else if (param_1[x] > param_2[y]) {
                return 1;
            } else {
                return -1;
            }
        }
    }

}

//  The strcmp() compares two strings character by character.
//  If the first character of two strings is equal, the next character of two strings are compared. 
//  This continues until the corresponding characters of two strings are different or a null character '\0' is reached.
//  Once the characters are not equal, the string with the larger of the 2 is 1. 
//  param1 > param2 = 1
//  param1 < param2 = -1
//  param1 = param2 = 0