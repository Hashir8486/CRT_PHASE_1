/*print grade 90+ A, 80-89 b, 70-79 c, 60-69 d, <60 e */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>> n;
    if(n>=90){
        cout<<"Grade A";
    }
    else if(n>=80 && n<=89){
        cout<<"Grade B";
    }
    else if(n>=70 && n<=79){
        cout<<"Grade C";
    }
    else if(n>=60 && n<=69){
        cout<<"Grade D";
    }
    else if(n<60){
        cout<<"Grade E";
    }
}