#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int nthSuperUglyNumber(int n, int* primes, int primesSize) {
    int *nums = malloc(n * sizeof(int));
    int *idx = (int*)calloc(primesSize, sizeof(*idx));
    nums[0] = 1;
    for (int i = 1; i < n; i++) {
        nums[i] = INT_MAX;
        for (int j = 0; j < primesSize; j++)    nums[i] = MIN(nums[i], (long long)nums[idx[j]] * primes[j]);
        for (int j = 0; j < primesSize; j++)
            if (nums[i] == (long long)nums[idx[j]] * primes[j])   idx[j]++;
    }
    return nums[n - 1];
}
    
