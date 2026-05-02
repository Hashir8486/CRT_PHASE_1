/*wap that takes a single alphabet character as a input from the user and determine whether it is a vowel or a consonants*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character";
    cin>>ch;
    switch (ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    cout<<ch<<" is a vowel"<<endl;
    break;
    default:
    cout<<ch<<" is a consonants"<<endl;
    break;
}
return 0;
}
    