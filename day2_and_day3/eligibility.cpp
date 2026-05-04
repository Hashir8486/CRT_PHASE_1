/*wap that takes integer input representing a person age use an else if ladder to determine and print 1. eligible to vote 2.if age is b/w 18 to 99 3. not eligible to vote if age is0-17 and invalid if age is */
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age";
    cin>>age;
    if(age<0){
        cout<<"invalid age";
    }
    else if(age>0&&age<=17){
        cout<<"not eligible to vote";
    }
    else if(age>18 && age<99){
        cout<<"eligible to vote";
    }
    else if(age>99){
        cout<<"crossed century and eligible to vote";
    }
}