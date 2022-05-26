char* inter(char* param_1, char* param_2)
{
    char* answer = (char*) malloc(100 * sizeof(char));
    int addingValue = 0;
    char* ptr1; 
    char* ptr2;
    ptr1 = param_1;
    ptr2 = param_2;

    int checkingDoubles( char* str, char c){
        for (int i = 0; i < strlen(str); ++i) {
            if (str[i] == c) {
                return 1;
            }
        } return 0;
    }

    for (int i = 0; i < strlen(param_1); ++i) {
        for (int g = i; g < strlen(param_2); ++g) {
        if (!(checkingDoubles(answer, param_1[i])) && param_1[i] == param_2[g]) {
            answer[addingValue] = param_1[i];
            addingValue++;
            } 
        }
    }
    // for (int i = 0; i < strlen(param_2); ++i) {
    //     if (!(checkingDoubles(answer, param_2[i]))) {
    //         answer[addingValue] = param_2[i];
    //         addingValue++;
    //     }
    // }
    return answer;

}

// Input: "padinton" && "paqefwtdjetyiytjneytjoeyjnejeyj"
// Output: 
// Return Value: "padinto"