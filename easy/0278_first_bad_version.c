// The API isBadVersion is defined for you.
bool isBadVersion(int version);

int firstBadVersion(int n) {
    int left = 0, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid) != 1) left = mid + 1;
        else    right = mid;
    }
    return left;
}
