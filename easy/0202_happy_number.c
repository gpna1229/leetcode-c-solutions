int countSquare(int n) {
    int result = 0;
    while (n != 0) {
        result += (n % 10) * (n % 10);
        n /= 10;
    }
    return result;
}

bool isHappy(int n) {
    int slow = n, fast = n;
    while (slow != 1 && fast != 1) {
        slow = countSquare(slow);
        fast = countSquare(countSquare(fast));
        if (fast != 1 && slow == fast)  return false;
    }
    return true;
}
