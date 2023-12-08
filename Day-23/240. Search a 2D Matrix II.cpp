class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        int startIndex = 0, endIndex = c - 1;

        while (startIndex < r && endIndex >= 0) {
            int currentElement = matrix[startIndex][endIndex];

            if (currentElement == target) {
                return true;
            } else if (currentElement < target) {
                // Move to the next row
                startIndex++;
            } else {
                // Move to the previous column
                endIndex--;
            }
        }

        return false;
    }
};
