int is_anagram(char* param_1, char* param_2)
{

    char* ptr1; 
    char* ptr2;
    ptr1 = param_1;
    ptr2 = param_2;

    int first[26] = {0};
    int second[26] = {0};
    int c = 0;

    while (ptr1[c] != '\0') {
        first[ptr1[c] - 97]++;
        c++;
  }

    c = 0;

    while (ptr2[c] != '\0') {
        second[ptr2[c] - 97]++;
        c++;
  }
    for (c = 0; c < 26; c++)
    if (first[c] != second[c])
    return 0;

  return 1;

}
