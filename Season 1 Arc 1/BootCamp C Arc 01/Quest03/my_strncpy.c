char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    int x = 0;
    while (x < param_3) {
        *param_1 = *param_2;
        param_1++;
        param_2++;
        x++;
    }
    return param_1;
}