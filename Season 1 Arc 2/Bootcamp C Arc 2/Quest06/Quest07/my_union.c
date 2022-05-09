char* my_union(char* param_1, char* param_2)
{
    char* ptr1; 
    char* ptr2;
    ptr1 = param_1;
    ptr2 = param_2;

    char* answer = (char*) malloc(100 * sizeof(char));
    int answerPushed = 0;

    int checkIfPresent(const char* str, char c) {
        for (int i = 0; i < strlen(str); ++i) {
            if (str[i] == c) {
                return 1;
            }
        } return 0;
    }

    for (int i = 0; i < strlen(ptr1); ++i) {
        if (!(checkIfPresent(answer, param_1[i]))) {
            answer[answerPushed] = param_1[i];
            answerPushed++;
        }
    }
    for (int g = 0; g < strlen(ptr2); ++g) {
        if (!(checkIfPresent(answer, param_2[g]))) {
            answer[answerPushed] = param_2[g];
            answerPushed++;
        }
    }
    return answer;
} 


