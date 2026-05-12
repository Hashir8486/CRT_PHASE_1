#include<iostream>
using namespace std;
int linear_search(int nums[], int n, int target){
    for(int i=0; i<n; i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size =sizeof(arr)/sizeof(arr[0]);
    int ans = linear_search(arr, size, 3);
    cout<<"element found at index: "<<ans<<endl;
    return 0;
}