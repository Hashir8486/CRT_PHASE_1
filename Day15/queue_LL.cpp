#include<iostream>
using namespace std;

// Structure for the Linked List nodes
struct Node {
    int data;
    Node *next;
};

class Queue {
private:
    Node *front;
    Node *rear; // <-- Added the missing semicolon here!

public:
    Queue() {
        front = rear = NULL;
    }

    // Add an element to the back (rear) of the queue
    void enqueue(int x) {
        Node *newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        // If queue is empty, then new node is both front and rear
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            // Add the new node at the end of queue and change rear
            rear->next = newNode;
            rear = newNode;
        }
        cout << x << " inserted" << endl;
    }

    // Remove an element from the front of the queue
    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow" << endl;
            return;
        }

        // Store previous front and move front one node ahead
        Node *temp = front;
        cout << front->data << " deleted" << endl;
        front = front->next;

        // If front becomes NULL, then change rear also to NULL
        if (front == NULL) {
            rear = NULL;
        }
        
        delete temp; // Free the memory
    }

    // View the front element without removing it
    void peek() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Front element: " << front->data << endl;
        }
    }

    // Print all elements
    void display() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        cout << "Queue elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    
    cout << "--- Enqueueing Elements ---" << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    cout << "\n--- Displaying Queue ---" << endl;
    q.display();
    
    cout << "\n--- Dequeueing and Peeking ---" << endl;
    q.dequeue();
    q.peek();
    
    return 0;
}