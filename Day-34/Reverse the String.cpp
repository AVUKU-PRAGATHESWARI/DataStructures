#include <bits/stdc++.h>

using namespace std;

void reverse(string &str, int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap characters at start and end positions
    swap(str[start], str[end]);

    // Recursively call reverse for the substring (start + 1, end - 1)
    reverse(str, start + 1, end - 1);
}

string reverseString(string str) {
    reverse(str, 0, str.length() - 1);
    return str;
}
