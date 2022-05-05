int my_isdigit(int param_1) {
    if (((param_1 >= 'a' && param_1 <= 'z') || (param_1 >= 'A' && param_1 <= 'Z')) || (param_1 <= 0 && param_1 >= 10) || param_1 == ' ') {
        return 0;
    } else if (param_1 >= 1 && param_1 <= 9) {
        return 1;
    }
     else {
        return 1;
    }
}


//  (param_1 >= 'a' && param_1 <= 'z') || (param_1 >= 'A' && param_1 <= 'Z') || param_1 <= 0 || param_1 >= 10
//  param_1 >= 0 || param_1 <= 10
//  param_1 != NULL && param_1[0] == 0