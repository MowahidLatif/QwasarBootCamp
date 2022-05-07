int my_recursive_factorial(int param_1)
{

    if (param_1 > 1) {
        return param_1 * my_recursive_factorial(param_1 - 1);
    }

}

// int total = 1;
// for (int i = 0; i < param_1; i++) {
//     total += total * i;
// }
// return total;

// Input: 3                     3 x 2 x 1 = 6
// Output: 
// Return Value: 6

// Input: 2                     2 x 1 = 2
// Output: 
// Return Value: 2