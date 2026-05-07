#include<iostream>
using namespace std;
class Player{
    public:
    string name;
    int age;
void setName(string n){
    name = n;
}
};
//derived class or child class
class Cricketers : public Player{
    public:
    int runs;
    void setRuns(int r){
        runs=r;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
    }
};
int main(){
    int r;
    string name;
    cout<<" Enter name of cricketer ";
    cin>>name;
    cout<<" Enter number of runs ";
    cin>>r;
    Cricketers c1;
    c1.setName(name);
    c1.setRuns(r);
    c1.show();
    return 0;
}