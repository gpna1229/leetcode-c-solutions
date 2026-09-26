void moveZeroes(int* nums, int numsSize) {
    int left = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int tmp = nums[left];
            nums[left] = nums[i];
            nums[i] = tmp;
            left++;
        }
    }
}
