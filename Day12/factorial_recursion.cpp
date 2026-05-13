#include<iostream>
using namespace std;

// Define the factorial function outside main
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Factorial of number " << n << " is: " << factorial(n) << endl;
    return 0;
}