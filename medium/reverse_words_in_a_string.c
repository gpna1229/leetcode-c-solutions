char* reverseWords(char* s) {
    int left = strlen(s) - 1, right = strlen(s) - 1, i = 0, j;
    char* result = (char* )malloc(strlen(s) + 1);
    while (left >= 0) {
        while (left >= 0 && s[left] != ' ')   left--;
        if (i > 0  && left != right)  result[i++] = ' ';
        for (j = left + 1; j <= right; j++)
            if (s[j] != ' ')    result[i++] = s[j];    
        if (left >= 0) {
            right = left - 1;
            left--;
        }      
    }
    result[i] = '\0';
    return result;
}
