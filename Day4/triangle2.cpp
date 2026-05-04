/*     *
      **
     ***
    **** print this triangle pattern */
#include<iostream>
using namespace std;
int main(){
    int height;
    cout<<"enter height of triangle";
    cin>>height;
    for(int i=1; i<=height; i++){
        for(int k=4; k-i; k--){
        cout<<" ";
    }
    for(int j=1; j<=i; j++)
        cout<<"*";
        cout<<endl;
    
    }
    return 0;
}