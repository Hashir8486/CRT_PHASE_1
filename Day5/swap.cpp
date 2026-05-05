/*swap two numbers using pointers */
#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x=5,y=6;
    swap(&x, &y);
    cout<<"x: "<<x<<" y: "<<y<<endl;
    return 0;
}