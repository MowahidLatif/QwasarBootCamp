char* my_strdup(char* param_1)
{
    char *ptr = malloc(strlen (param_1));  
    strcpy(ptr, param_1);                      
    return ptr;                            

}