/*func that applied 10% discount using references update the original an print the updated bill*/
#include<iostream>
using namespace std;
void discount(double &total){
    total = total *0.90;
}
int main(){
    double bill;
    cout<<"Enter bill amount"<<endl;
    cin>>bill;
    discount(bill);
    cout<<"the updated value of bill = "<<bill<<endl;
    return 0;
}
