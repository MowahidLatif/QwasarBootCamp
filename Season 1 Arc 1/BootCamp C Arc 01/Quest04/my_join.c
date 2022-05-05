#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

// #ifndef TOTALSUMFUNCTION
// #define TOTALSUMFUNCTION
// int* calculate_size_of_array(string_array* param_1){
//     int index = 0;
//     int sum = 0;
//     while (index < param_1->size) {
//         sum += strlen(param_1->array[index]);
//         index += 1;
//     }
//     return sum;
//     }
// #endif

int calculate_size_of_array(string_array* words) {
    int index = 0;
    int sum = 0;

    while (index < words->size) {
        sum += strlen(words->array[index]);
        index += 1;
    }
    return sum;
}

char* my_join(string_array* words, char* sep)
{
    int sum_words = calculate_size_of_array(words);
    char *result = malloc(sizeof(char) * (sum_words + words->size));

    result[0] = '\0';
    int index = 0;
     if (words->array[0] != '\0') {
             while (index < words->size) {
        if (index > 0) {
            strcat(result, sep);
        }
        strcat(result, words->array[index]);
        index += 1;
    }
    return result;
    }

}

