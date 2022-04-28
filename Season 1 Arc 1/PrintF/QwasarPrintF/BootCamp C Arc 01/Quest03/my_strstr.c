#include <stdio.h>

char *my_strstr(char* s1, char *s2) {
    int index = 0;

    if (s1[0] == '\0' && s2[0] == '\0') {
        return s1;
    }

    while (s1[index] != '\0') {
        int jndex = 0;
        int save_index = index;

        while (s1[index] != '\0' && s1[index] == s2[jndex]) {
            index += 1;
            jndex += 1;
        }
        index = save_index;
        if (s2[jndex] == '\0') {
            return &s1[index];
        }
        index += 1;
    }
    return NULL;
}
