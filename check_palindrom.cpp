// Problem Name : Palindrome Number
// Description  : Checks whether a number is a palindrome
// Approach     : Reverse the number and compare with original
// Time Complexity : O(digits)

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    int dup = n;
    int revNum = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n /= 10;
    }

    return (dup == revNum);
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
