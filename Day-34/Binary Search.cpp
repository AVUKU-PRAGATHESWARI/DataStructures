int binarysearch(vector<int>& nums, int left, int right, int target) {
    if (left > right || nums.empty()) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (nums[mid] == target) {
        return mid;
    } else if (nums[mid] < target) {
        left = mid + 1;
    } else {
        right = mid - 1;
    }

    return binarysearch(nums, left, right, target);
}

int search(vector<int>& nums, int target) {
    return binarysearch(nums, 0, nums.size() - 1, target);
}
