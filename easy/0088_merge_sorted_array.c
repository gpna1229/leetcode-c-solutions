void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int left = nums1Size - 1 - n, right = nums1Size - 1;
    n--;
    while (n >= 0) {
        if (left < 0)   nums1[right--] = nums2[n--];
        else if (nums1[left] < nums2[n]) nums1[right--] = nums2[n--];
        else    nums1[right--] = nums1[left--];
    }
}
