// Problem Name : Print All Divisors
// Description  : Prints all divisors of a given number
// Approach     : Use divisor pairs and loop till sqrt(n)
// Time Complexity : O(√n)

#include <iostream>
using namespace std;

void printDivisors(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            if (n / i != i)
                cout << n / i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
