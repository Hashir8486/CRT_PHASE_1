#include<iostream>
using namespace std;

class Cricketers {
    public:
    string name;
    int runs;
    double avg;

    // 1. FIX: Added the missing comma between 'string n' and 'int r'
    Cricketers(string n, int r, double avg) {
        name = n;
        runs = r;
        this->avg = avg; // Great use of the 'this->' pointer here!
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        // Optional: Added the average so it prints out too
        cout << "Average: " << avg << endl; 
    }
};

int main() {
    string name;
    int r;
    double a; // Variable to store the average input

    // 2. FIX: Ask the user for ALL the details needed for the constructor
    cout << "Enter name: ";
    cin >> name;
    
    cout << "Enter runs: ";
    cin >> r;
    
    cout << "Enter average: ";
    cin >> a;

    // 3. FIX: Pass the user inputs directly into the constructor
    // Because you wrote a custom constructor, you can no longer use 'Cricketers c1;' (an empty constructor).
    Cricketers c1(name, r, a);
    
    cout << "\n--- Player Details ---" << endl;
    c1.show();

    return 0;
}