/*wap in c++ that takes an integer as an input form the user print all the numbers b/w 1 to n i.e. divisible by 2*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            cout<<i<<endl;
        }
    }
    return 0;
}