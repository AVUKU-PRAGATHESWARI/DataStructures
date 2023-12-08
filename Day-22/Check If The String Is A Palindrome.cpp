#include <bits/stdc++.h> 

bool isvalid(char c){
    if( (c>='a' && c<= 'z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
        return true;
    }
    else{
        return false;
    }
}

bool checkPalindrome(string s)
{
    string temp;
    for(int i=0;i<s.length();i++){
        if (isvalid(s[i])) {
          temp.push_back(s[i]);
        }
    }
    for(int i=0;i<temp.length();i++){
        temp[i] = tolower(temp[i]);
    }
    int start = 0;
    int end = temp.length()-1;
    while(start < end){
        if (temp[start]!=temp[end]){
            return false;
        }
        start += 1;
        end -= 1;
    }
    return true;
    
}