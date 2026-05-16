#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
}; // 1. Added the required semicolon here

void printNodes(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next; // 2. Added this line to move to the next node!
    }
    cout << "NULL" << endl; // Just prints NULL at the very end for visual clarity
}

int main() {
    // Step 1: Create individual nodes in memory
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // Step 2: Link the nodes together (10 -> 20 -> 30)
    head->next = second;
    second->next = third;

    // Step 3: Call your completed function
    cout << "My Linked List: ";
    printNodes(head);

    return 0;
}