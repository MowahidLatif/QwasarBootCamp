

char* rcapitalize(char* param_1)
{

//    char* answer = (char*)malloc(100 * sizeof(char*));
    char* ptr1;
    ptr1 = param_1;

    if (ptr1 != '\0') {
        for (int i = 0; ptr1[i] != '\0'; i++) {
            if (ptr1[i + 1] == ' ' || ptr1[i + 1] == '\0') {
                ptr1[i] = toupper(ptr1[i]);
            } else {
                ptr1[i] = tolower(ptr1[i]);
            }
        }
    } else {
        
    }
    return ptr1;

}