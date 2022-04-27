char* my_downcase(char* param_1)  
{
    int x = 32;
    for (int i=0; param_1[i] != '\0'; i++) 
        param_1[i] = param_1[i] | x; 
  
    return param_1; 
} 