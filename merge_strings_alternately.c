char * mergeAlternately(char * word1, char * word2){
    int i = 0, j = 0, k = 0;
    int len1 = strlen(word1), len2 = strlen(word2);
    char *word3 = (char *)malloc(len1 + len2 + 1);
    while ((i < len1) || (j < len2)){
        if (i == len1) word3[k++] = word2[j++];
        else if (j == len2) word3[k++] = word1[i++];
        else if (i == j)    word3[k++] = word1[i++];
        else    word3[k++] = word2[j++];
    }
    word3[k] = '\0';
    
    return word3;
}
