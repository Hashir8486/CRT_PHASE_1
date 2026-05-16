#include<iostream>
using namespace std;

class Stack{
    private:
    int top;
    int arr[100];
    
    public:
    Stack(){
        top = -1;
    }
    
    // Add an element to the top
    void push(int x){
        if(top >= 99){ // 99 is the last index of a size 100 array
            cout << "Stack Overflow" << endl;
        }
        else{
            top++;          // Move top up
            arr[top] = x;   // Insert the value
        }
    }
    
    // Remove the top element
    void pop(){
        if(top >= 0){
            top--; // Move top down to "remove" the element
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }
    
    // View the top element without removing it
    int peek(){
        if(top >= 0){
            return arr[top]; // Just return the value, don't change 'top'
        }
        else{
            cout << "Stack is empty" << endl;
            return -1; // Return a dummy value to indicate error
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Top element: " << s.peek() << endl; // Will output 30
    
    s.pop(); // Removes 30
    
    cout << "Top element after pop: " << s.peek() << endl; // Will output 20
    
    return 0;
}