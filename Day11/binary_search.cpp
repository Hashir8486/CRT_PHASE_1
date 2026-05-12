#include<iostream>
using namespace std;

int binary_Search(int nums[], int n, int target) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target) {
            // Mid is too big, search the left side
            right = mid - 1;
        }
        else {
            // Mid is too small, search the right side
            left = mid + 1;
        }
    }
    
    // Return -1 if the loop finishes and target is not found
    return -1;
}

int main() {
    // 1. Define the array and fix the semicolon
    int arr[5] = {1, 2, 3, 4, 5}; 
    
    // 2. Calculate the size
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // 3. Define a target to search for
    int target = 4; 
    
    // 4. Complete the function call
    int result = binary_Search(arr, size, target); 
    
    // 5. Print the results
    if (result != -1) {
        cout << "Target " << target << " found at index: " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }
    
    return 0;
}