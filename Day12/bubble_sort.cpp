#include<iostream>
using namespace std;
void swap_array(int &a, int &b){
        int temp = a;
        a=b;
        b=temp;
}
void BubbleSort(int nums[], int n){
    for(int i=0; i<n; i++){
        bool flag =false;
        for(int j=0; j<n-i-1; j++){
            if(nums[j]>nums[j+1]){
                cout<<"Array is sorted"<<endl;
                swap_array(nums[j], nums[j+1]);
                flag = true;
            }
        }
        if(!flag){
            cout<<"Array is already sorted"<<endl;
            break;
        }
    }
}
int main(){
    int arr[5] = {1, 3, 2, 5, 4};
    int size =sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}