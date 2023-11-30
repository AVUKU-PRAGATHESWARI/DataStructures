class Solution {
public:
    bool isPowerOfTwo(int n) {
        int pow = 1;
        for(int i=0;i<=30;i++){            
            if(pow==n){
                return true;
            }
            if(pow < INT_MAX/2){
                pow*=2;
            }
        }
        return false;
    }
};