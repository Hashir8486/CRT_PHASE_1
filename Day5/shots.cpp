/*func that takes number of coffee shots return the total shots, if 1shot=30ml */
#include<iostream>
using namespace std;
int shots(int numShots){
    return numShots*30;
}
int main(){
    int shotsInput;
    cout<<"enter the number of shots"<<endl;
    cin>>shotsInput;
    int total = shots(shotsInput);
    cout << "Total volume: " << total << "ml" << endl;
    return 0;
}
