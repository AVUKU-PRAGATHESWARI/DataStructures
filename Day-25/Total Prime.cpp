#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

int totalPrime(int S, int E) {
    int count = 0;
    
    // Using a vector instead of an array for dynamic size
    vector<bool> prime(E + 1, true);

    // Marking non-prime numbers
    for (int i = 2; i * i <= E; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= E; j += i) {
                prime[j] = false;
            }
        }
    }

    // Counting prime numbers in the range
    for (int i = max(2, S); i <= E; i++) {
        if (prime[i]) {
            count++;
        }
    }

    return count;
}


int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}