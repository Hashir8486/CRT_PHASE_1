/*cpp program that take two integer as a input form the user find max of two usig condition ternary conditional operator*/
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter two numbers ";
    cin>>a>>b;
    int max = (a>b)?a:b;
    cout<<"largest is"<<max;
}