class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int l =nums.size();
        for(int i=1;i<l;i++){
            if(nums[i-1]>nums[i]){
                count += 1;
            }
        }
        if(nums[0] < nums[l-1]){
            count += 1;
        }
        return count<=1;
    }
};