#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1 = "Hello";
    string str2 = "World";
    cout<<str1<<" "<<str2<<endl;
    //1. length of string
    int n = str1.length();
    cout<<"Length of String is: "<<n<<endl;
    //2. append sting
    cout<<"After appending string is: "<<str1.append("Student")<<endl;
    //3.empty String
    cout<<"Is string empty "<<str2.empty()<<endl;
    //4.concatination of string
    cout<<"After concatination "<<str1+"Glad you are alive"<<endl;
    cout<<"After concatination "<<str2<<endl;
    //5. pop_back() method
    str2.pop_back();
    cout<<"After push_back() method: "<<str2<<endl;
    //push_back() 
    str2.push_back('U');
    cout << "After push_back() method:" << str2 << endl;
    //6 find() method
    int index = str1.find("ello");
    cout<<"Index of ello in str1:"<<index<<endl;
    //at method, str1[1];
    char ch = str1.at(1);
    cout<<"Character at index 1 in str1:"<<ch<<endl;
    //swap() method
    str1.swap(str2);
    cout<<"After swapping str1 and str2: "<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;
    //substring() method
    string subStr = str2.substr(5,6);
    cout<<"Substring from index 5 to 6 od str2 is: "<<subStr<<endl;
    //getline() method
    string str3;
    getline(cin, str3);
    cout<<"You entered: "<<str3<<endl;
    return 0;
}