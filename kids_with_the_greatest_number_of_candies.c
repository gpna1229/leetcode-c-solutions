/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int i, maxCandies = 0;
    for (i = 0; i < candiesSize; i++)
        if (candies[i] > maxCandies)   maxCandies = candies[i];

    bool* result = (bool*)malloc(candiesSize * sizeof(bool));
    for (i = 0; i < candiesSize; i++) {
        if (candies[i] + extraCandies >= maxCandies)    result[i] = true;
        else result[i] = false;
    }
    *returnSize = candiesSize;
    
    return result;
}
