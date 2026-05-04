/*takes continuesly +ve int as an input from the user and add them to running sum variable, if the user enters a -ve no. immediately terminate the loop using break statement and print the final sum*/
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    // An infinite 'for' loop
    for (;;) { 
        cout << "Enter a number: ";
        cin >> n;
        
        // If the user enters a negative number, break out of the loop immediately
        if (n < 0) {
            break; 
        }
        
        // Add the positive number to the running sum
        sum = sum + n; 
    }
    
    // Print the final sum after the loop has been terminated
    cout << "The final sum is: " << sum << endl;
    
    return 0;
}