/* takes an int as input and print all numbers from 1 to n and skip any number i.e multiple of 3 using continue */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            continue;
        }
        else{
            cout<<i<<" \n ";
        }
    }
}