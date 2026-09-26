char* nextStr(char* s, int sSize) {
    char* next = (char* )malloc(5000 * sizeof(char));
    char c = s[0];
    int id = 0, count = 1;
    for (int i = 1; i < sSize; i++) {
        if (s[i] == c)  count++;
        else {
            next[id++] = count + '0';
            next[id++] = c;
            count = 1;
            c = s[i];
        }
    }
    next[id++] = count + '0';
    next[id++] = c;
    next[id] = '\0';
    return next;
}

char* countAndSay(int n) {
    char *str = "1";
    for (int i = 1; i < n; i++) {
        str = nextStr(str, strlen(str));
    }
    return str;
}
