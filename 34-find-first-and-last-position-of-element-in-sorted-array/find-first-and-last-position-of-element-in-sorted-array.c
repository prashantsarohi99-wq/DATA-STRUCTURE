int findFirst(int* nums, int size, int target) {
    int left = 0, right = size - 1, ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            ans = mid;
            right = mid - 1; 
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}
int findLast(int* nums, int size, int target) {
    int left = 0, right = size - 1, ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            ans = mid;
            left = mid + 1;  
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    static int result[2];   
    *returnSize = 2;
    result[0] = findFirst(nums, numsSize, target);
    result[1] = findLast(nums, numsSize, target);
    return result;
}