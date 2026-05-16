#include<iostream>
using namespace std;
int powerOf2(int n){
    if(n==0)
        return false;
    if(n==1)
        return true;
    return (n%2==0)&& powerOf2(n/2);
}
int  main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cout<<"Enter the number: ";
        cin>>n;
        bool result = powerOf2(n);
        if(result)
            cout<<n<<"is a power of 2. "<<endl;
        else
            cout<<n<<"is not a power of 2. "<<endl;
    }
    return 0;
}