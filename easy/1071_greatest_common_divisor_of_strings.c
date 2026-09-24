char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1), len2 = strlen(str2);
    char *str12 = (char *)malloc(len1 + len2 + 1);
    char *str21 = (char *)malloc(len1 + len2 + 1);
    strcpy(str12, str1);
    strcat(str12, str2);
    strcpy(str21, str2);
    strcat(str21, str1);
    if (strcmp(str12,  str21) != 0)   return "";
    
    int tmp, a = strlen(str1), b = strlen(str2);
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    str1[a] = '\0';

    return str1;
}
