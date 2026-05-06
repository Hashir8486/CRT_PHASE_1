/**/
#include<iostream>
#include<random>
using namespace std;
class Student{
    private:
    int reg;
    public:
    string name;
    int age;
    Student(){
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distrib(1000,9999);
        reg = distrib(gen);
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Registration No. "<<reg<<endl;
    }
};
int main(){
    Student s1;
    s1.name = "Hashir";
    s1.age = 21;
    s1.display();
    return 0;
}