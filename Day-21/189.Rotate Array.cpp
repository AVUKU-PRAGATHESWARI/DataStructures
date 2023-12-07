class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp=nums;
        int l = nums.size();
        for(int i=0;i<l;i++){
            temp[((i+k)%l)] = nums[i];
        }
        nums=temp;
        
    }
};