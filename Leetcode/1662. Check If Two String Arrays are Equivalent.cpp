class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string new1;
        string new2;
        int n = word1.size();
        int m = word2.size();
        for(int i=0;i<n;i++){
            new1 += word1[i];
        }
        for(int j=0;j<m;j++){
            new2 += word2[j];
        }
        return new1==new2;
    }
};