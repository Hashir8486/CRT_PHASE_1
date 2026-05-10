#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int balance){
        this->balance = balance;
    }
    //withdraw method
    void Withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            balance -= amount;
            cout<<"Amout Withdrawn: "<<amount<<endl;
        }
    }
    void ShowBalance(){
        cout<<"Current balance: "<<balance<<endl;
    }
};
int main(){
    int w;
    cout<<" Enter amount to withdrawn ";
    cin>>w;
    ATM a(6000);
    a.ShowBalance();
    a.Withdraw(w);
    a.ShowBalance();
    return 0;
}
