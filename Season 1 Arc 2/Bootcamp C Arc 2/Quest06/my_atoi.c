int my_atoi(char* param_1)
{

    int result = 0;
    int sign = 1;
    int i = 0;

    if (param_1[0] == '-') {
        sign = -1;
        i++;
    }

    for (; param_1[i] != '\0'; ++i) {
        result = result * 10 + param_1[i] - '0';
    }
    return sign * result;

}
