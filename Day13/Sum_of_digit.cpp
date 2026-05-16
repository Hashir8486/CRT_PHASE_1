#include<iostream>
using namespace std;
int sumOfDigits(int x){
    //Base case
    if(x==0)
        return 0;
    return(x%10)+sumOfDigits(x/10);
}
int main(){
    int n;
    cin>>n;
    cout<<"Sum of digits of "<<n<<"is: "<<sumOfDigits(n)<<endl;
    return 0;
}