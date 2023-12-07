#include <bits/stdc++.h> 
vector<int> revrseArray(vector<int>&c){
	int start = 0,end = c.size()-1;
	while(start < end){
		int temp = c[start];
		c[start] = c[end];
		c[end] = temp;
		start ++;
		end --;
	}
	return c;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	vector<int> c;
	int i = n-1;
	int j = m-1;
	int sum = 0;
	int carry = 0;
	while(i>=0 && j>=0){
		sum = a[i]+b[j]+carry;
		carry = sum/10;
		sum = sum%10;
		c.push_back(sum);
		i--;
		j--;
	}
	while(i>=0){
		sum = a[i]+carry;
		carry = sum/10;
		sum = sum%10;
		c.push_back(sum);
		i--;
	}
	while(j>=0){
		sum = b[j]+carry;
		carry = sum/10;
		sum = sum%10;
		c.push_back(sum);
		j--;
	}
	while(carry!=0){
		int sum =carry;
		carry = sum/10;
		sum = sum%10;
		c.push_back(sum);
	}
	c = revrseArray(c);
	return c;
	
}