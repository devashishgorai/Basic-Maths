// Problem Name : Count Digits in a Number
// Description  : Counts the number of digits in a given integer
// Approach     : Repeatedly divide by 10
// Time Complexity : O(digits)
// Author       : Devashish Gorai

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1;

    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}

