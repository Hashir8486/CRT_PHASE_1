#include<iostream>
using namespace std;
void swap_array(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
void selection_sort(int nums[], int n){
    for(int i=0; i<n; i++){
        int mini =i;
        for(int j=i+1; j<n; j++){
            if(nums[mini]>nums[j]){
                mini = j;
            }
        }
        swap_array(nums[i], nums[mini]);
    }
}
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: ";
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    selection_sort(arr, n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}