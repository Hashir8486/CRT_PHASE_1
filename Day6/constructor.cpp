#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollNo;
    // Default constructor
    Student(){
        name = "Hashir";
        rollNo = 1;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNo<<endl;
        cout<<"Default Constructor is called "<<endl;
    }
};
int main(){
    Student s1;
    s1.show();
    return 0;
}