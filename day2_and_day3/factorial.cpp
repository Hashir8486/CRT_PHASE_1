/*takes +ve integer n as input from the user then calculate its factorial using for loop*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int fact = 1;
    if(n==0 || n==1){
        cout<<"factorial = 1"<<endl;
    }
    else{
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"factorial of number is "<<fact<<endl;
} return 0;
}