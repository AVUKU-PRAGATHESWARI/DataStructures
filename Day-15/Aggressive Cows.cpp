bool ispossible(vector<int> &stalls, int k, int mid, int l) {
    int coord = stalls[0], count = 1;
    for(int i = 0; i < l; i++) {
        if(stalls[i] - coord >= mid) {
            count += 1;
            coord = stalls[i];
        }
        if(count >= k) {
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int l = stalls.size(), ans = -1, mid;    
    int s = 0, e = stalls[l - 1];
    for(int i=0;i<l;i++){
      e = max(e,stalls[i]);
    }
    while(s <= e) {
        mid = (s + e) / 2;
        if(ispossible(stalls, k, mid, l)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}
