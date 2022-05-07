int my_iterative_pow(int param_1, int param_2)
{

    int result = 1;
    for (int num = 0; num < param_2; num++) {
        result = result * param_1;
    }
    return result;

}

