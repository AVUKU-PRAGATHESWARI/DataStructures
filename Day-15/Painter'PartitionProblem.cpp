bool isPossible(vector<int> &boards,int k,int mid,int l){
    int initial = 1;
    int curr_sum = 0;
    for(int i=0;i<l;i++){
        if(curr_sum+boards[i] > mid){
            curr_sum = 0;
            initial += 1;
            if(initial > k || curr_sum > mid){
                return false;
            }
        }
        curr_sum += boards[i];
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0,e = 0,l = boards.size(),ans=-1;
    for(int i=0;i<l;i++){
        s = max(s,boards[i]);
        e += boards[i];
    }
    while(s<=e){
        int mid = (s+e)/2;
        if(isPossible(boards,k,mid,l)){
            e = mid-1;
            ans = mid;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}