/*simulates simple customer simple using switch case statement in that menu option are
1- support
2- billing
3- technical support
4/0- speak to an agent*/
#include<iostream>
using namespace std;
int main(){
    int choice;
    cout << "--- Customer Service Menu ---" << endl;
    cout << "1 - General Support" << endl;
    cout << "2 - Billing" << endl;
    cout << "3 - Technical Support" << endl;
    cout << "4 or 0 - Speak to an Agent" << endl;
    cout << "-----------------------------" << endl;
    cout<<"Enter choice"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"You have selected general support"<<endl;
        /* code */
        break;
    case 2:
    cout<<"You have selected billing"<<endl;
    break;
    
    
    default:
        break;
    }
}