//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26] = {0};
        int number = -1;
        int maxi = -1, ans = -1;
        for(int i=0;i<str.length();i++){
            if(str[i] >= 'a' && str[i]<='z')//lowercse
            {
                number = str[i]-'a';
            }
            else//uppercase
            {
                number = str[i]-'A';
            }
            arr[number]++;
        }
        for(int i=0;i<26;i++){
            if (arr[i] > maxi){
                maxi = arr[i];
                ans = i;
            }
        }
        return 'a'+ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends