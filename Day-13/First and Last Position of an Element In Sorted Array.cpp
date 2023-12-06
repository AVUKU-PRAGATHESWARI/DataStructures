int firstindex(vector<int>& arr, int n, int k){
    int l = 0, r = n-1;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]<k){
            l = mid+1;
        }
        else if(arr[mid]>k){
            r = mid-1;
        }
        else{
            ans = mid;
            r = mid-1;
        }
    }
    return ans;

}

int lastindex(vector<int>& arr, int n, int k){
    int l = 0, r = n-1;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]<k){
            l = mid+1;
        }
        else if(arr[mid]>k){
            r = mid-1;
        }
        else{
            ans = mid;
            l = mid+1;
        }
    }
    return ans;

}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> ans;
    ans.first = firstindex(arr,n,k);
    ans.second = lastindex(arr,n,k);
    return ans;
}
