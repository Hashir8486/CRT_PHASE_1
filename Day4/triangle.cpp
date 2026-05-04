/* *
   **
   ***
   **** triangle pattern  */
#include<iostream>
using namespace std;
int main(){
    int height;
    cout<<"Enter height of triangle"<<endl;
    cin>>height;
    for(int i=1; i<=height; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}