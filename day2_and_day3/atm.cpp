/*simulate an atm withdrawl system the program should take the withdrawl determine whether the transaction is valid or not */
#include<iostream>
using namespace std;
int main(){
    int balance = 1000;
    int dailyLimit = 500;
    int amount;
    cout<<"Welcome to the ATM"<<endl;
    cout<<"Your current balance is "<<balance<<endl;
    cout<<"Enter the amount you want to withdraw: $"<<endl;
    cin>>amount;
    if(amount <= 0){
        cout<<"Error: Whitdrawal amount must be greater than zero... "<<endl;
    }
    else if(amount % 10 !=0){
        cout<<"Error: The ATM only gives $10 notes..."<<endl;
    }
    else if(amount > balance){
        cout<<"Error: You do not have enough money in your account."<<endl;
    }
    else{
        balance = balance - amount;
        cout<<"Success! take your cash..."<<endl;
        cout<<"Your new balance is "<<balance<<endl;
    }
    return 0;
}