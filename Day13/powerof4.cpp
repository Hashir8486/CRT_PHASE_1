#include<iostream>
using namespace std;

bool isPowerOfFour(int n) {
    // 1. Catch zero AND all negative numbers immediately
    if (n <= 0) {
        return false;
    }
    // 2. Base case for success
    if (n == 1) {
        return true;
    }
    
    // 3. Recursive case
    return (n % 4 == 0) && isPowerOfFour(n / 4);
}

int main() {
    int t;
    // Added a prompt so the user knows what to do
    cout << "Enter the number of test cases: "; 
    cin >> t;
    
    int n;
    while (t--) {
        cout << "Enter the number: ";
        cin >> n;
        
        bool result = isPowerOfFour(n);
        
        // Added spaces before the word "is"
        if (result) {
            cout << n << " is a power of 4." << endl;
        } else {
            cout << n << " is not a power of 4." << endl;
        }
    }
    
    return 0;
}