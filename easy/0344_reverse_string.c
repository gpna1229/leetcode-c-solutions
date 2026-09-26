void reverseString(char* s, int sSize) {
    char tmp;
    for (int i = sSize - 1; i >= sSize / 2; i--) {
        tmp = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = tmp;
    }
}
