int maximumCount(int* nums, int numsSize) {
    int left = 0, right = numsSize - 1, mid;
    int first_pos = numsSize, first_neg = numsSize;

    while (left <= right) {
        mid = (left + right) / 2;
        if (nums[mid] > 0) {
            first_pos = mid;
            right = mid - 1;
        }
        else    left = mid + 1;
    }
    int pos_count = numsSize - first_pos;

    left = 0, right = numsSize - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (nums[mid] >= 0) {
            first_neg = mid;
            right = mid - 1;
        }
        else    left = mid + 1;
    }
    int neg_count = first_neg;

    return pos_count > neg_count ? pos_count : neg_count;
}
