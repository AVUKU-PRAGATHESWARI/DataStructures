class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(),c = matrix[0].size();
        int start = 0,end = r*c-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            int curr = matrix[mid/c][mid%c];
            if(curr == target){
                return true;
            }
            else if(curr<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }
};