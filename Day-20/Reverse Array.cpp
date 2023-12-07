vector<int> reverseArray(int n, vector<int> &nums)
{
    int start = 0 ;
    int end = nums.size()-1;
    while(start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start += 1;
        end -= 1;
    }
    return nums;

}
