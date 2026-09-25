#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int nthUglyNumber(int n) {
    int uglyNumbers[1690], list1 = 0, list2 = 0, list3 = 0;
    uglyNumbers[0] = 1;
    for (int i = 1; i < n; i++) {
        uglyNumbers[i] = MIN(uglyNumbers[list1] * 2, MIN(uglyNumbers[list2] * 3, uglyNumbers[list3] * 5));
        if (uglyNumbers[i] == uglyNumbers[list1] * 2)  list1++;
        if (uglyNumbers[i] == uglyNumbers[list2] * 3)  list2++;
        if (uglyNumbers[i] == uglyNumbers[list3] * 5)   list3++;
    }
    return uglyNumbers[n - 1];
}
