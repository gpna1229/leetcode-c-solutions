double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0, max_sum;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    max_sum = sum;

    for (int i = k; i < numsSize; i++) {
        sum += nums[i] - nums[i - k];
        max_sum = MAX(sum, max_sum);
    }
    return (double)max_sum / k;
}
