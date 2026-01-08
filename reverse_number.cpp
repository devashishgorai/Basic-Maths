// Problem Name : Reverse a Number
// Description  : Reverses the digits of a given integer
// Approach     : Extract digits and build reverse using multiplication
// Time Complexity : O(digits)

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int revNum = 0;

    // Edge case
    if (n == 0) {
        cout << 0;
        return 0;
    }

    while (n > 0) {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n /= 10;
    }

    cout << revNum;
    return 0;
}

