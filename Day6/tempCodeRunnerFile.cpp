/*
class className{
    public:/private:/protected:
    //Data members
    //Member function}
int main(){
className c1; --> object creation
}*/
/*create Student(name, rollNo.) */
#include <iostream>
using namespace std;
class Student
{
public:
    // Data members
    string name;
    int rollNo;
    // member function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Hashir";
    s1.rollNo = 1;
    s1.display();
    return 0;
}