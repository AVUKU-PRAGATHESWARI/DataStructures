#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    int l = arr.size();
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
