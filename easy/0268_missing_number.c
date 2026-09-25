int missingNumber(int* nums, int numsSize) {
    int tmp = 0;
    for (int i = 0; i < numsSize; i++)  tmp = tmp ^ i ^ nums[i];
    return tmp ^ numsSize;
}
