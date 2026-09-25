# define HASH_SIZE 25000

int hash_func(int key) {
    int hash_value = key % HASH_SIZE;
    return hash_value < 0 ? hash_value + HASH_SIZE : hash_value;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *result = (int *)malloc(sizeof(int) * 2);
    int *key = (int *)calloc(HASH_SIZE, sizeof(int));
    int *value = (int *)calloc(HASH_SIZE, sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        int idx = hash_func(target - nums[i]);
        while (key[idx] != 0) {
            if (value[idx] == target - nums[i]) {
                result[0] = key[idx] - 1;
                result[1] = i;
                return result;
            }
            idx = (idx + 1) % HASH_SIZE;
        }
        idx = hash_func(nums[i]);
        while (key[idx] != 0) {
            idx = (idx + 1) % HASH_SIZE; 
        }
        key[idx] = i + 1;
        value[idx] = nums[i];
    }
    *returnSize = 0;
    return NULL;
}
