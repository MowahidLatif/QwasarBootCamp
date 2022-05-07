int my_fibonacci(int param_1)
{
    if (param_1 <= 1) {
        return param_1;
    } else {
        return my_fibonacci(param_1 - 1) + my_fibonacci(param_1 - 2);
    }
}
