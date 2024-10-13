#include <iostream>
using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 0) return 0;  // Base case for 0
    if (n == 1) return 1;  // Base case for 1
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2); // Recursive case
}

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> n;

    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacciRecursive(i) << " "; // Print each term using recursion
    }
    cout << endl;

    return 0;
}
