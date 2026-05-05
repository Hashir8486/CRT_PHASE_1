/*func to with default arguments and calling it with or without parameters*/
#include<iostream>
using namespace std;
int add(int a, int b=0){
    return a+b;
}
int main(){
    cout<<add(5, 7)<<endl;
    cout<<add(7)<<endl;
    return 0;
}