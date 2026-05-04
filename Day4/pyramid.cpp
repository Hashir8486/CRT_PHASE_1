/*    *   
    *  *
   *  *  *
  *  *  *  *     */
#include<iostream>
using namespace std;
int main(){
    int height;
    cout<<"enter height of pyramid";
    cin>>height;
    for(int i=1; i<=height; i++){
        for(int k=1; k<=(height-i); k++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}