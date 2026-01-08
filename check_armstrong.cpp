// Problem Name : Armstrong Number
// Description  : Checks whether a number is an Armstrong number
// Approach     : Count digits, raise each digit to power of digits, sum and compare
// Time Complexity : O(digits)

#include<iostream>
using namespace std;

bool isarmstrong(int n) {
    int dup = n;
    int sum = 0;

    while (n > 0) {
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        n /= 10;
    }

    return (sum == dup);
}

int main() {
    int n;
    cin >> n;

    if (isarmstrong(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
