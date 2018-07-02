#include <iostream>
using namespace std;

// linked list implementation of queue
class linkedListQueue {
  struct Node {
    int data; // values in queue
    Node* next; // the next pointer
    // node constructor
    Node(int value): data(value), next(NULL) {}
  };
  
  Node* head; // the head pointer
  int length; // track the number of nodes
  
  public:
  // default constructor
  linkedListQueue() {
    head = NULL;
    length = 0;
  }

  // check if the queue is empty
  bool isEmpty() { return length == 0; }

   // return the size of the queue
  int size() { return length; }

  // get the front of the queue
  int front() { 
    if (isEmpty())
      cout << "queue is empty! No content in queue!" << endl;
    else
      return head -> data; 
  }

  // enqueue the new value to the back of the queue
  void enqueue(int value) {
    // create an temporary object
    Node* temp = new Node(value); // create a temporary node

    // first check if list is empty
    if (isEmpty()) {
      head = temp; // let temp be the first node
      length++;
      return;
    }

    // not empty list, iterate and insert back
    Node* current = head;
    while (current -> next != NULL) // go the last node
      current = current -> next; // go to next node
    current -> next = temp; // let temp be the last node
    length++; // increament the queue size
  }; 

  // pop the top element
  void dequeue() {
    // check if the queue is empty
    if (isEmpty()) {
      cout << "queue is empty! No need for deletion!" << endl;
    }
    // not empty, pop the top of the queue
    else {
      Node* temp = head; // get a copy of the head
      head = head -> next; // let the head point to the next node
      temp -> next = NULL; // let original head points to NULL 
      delete temp; // delete the top
      length--;
    }
  }

  // output the entire queue
  void output() {
    if (isEmpty()) {
      cout << "No Contents in the queue!" << endl;
    }
    else {
      cout << "Contents: ";
      Node* current = head;
      while (current != NULL) {
        cout << current -> data << " ";
        current = current -> next;
      }
      cout << endl;
    }
  }

  // clear the queue
  void clear() {
    if (isEmpty()) {
      cout << "List is empty! No need for deletion!" << endl;
    }
    // else the list is not empty, delete head
    else {
      // while queue is not empty, pop it
      while (!isEmpty()) 
        dequeue();
    } 
  }
};

// print function
void print(string text) {cout << text;}

// testing the linked list version of queue
int main() {
  print("Linked List implementation of queue\n\n");

  // create a queue
  linkedListQueue queue;
  print("- queue created!\n");
  queue.output(); // output if content exists
  print("\n");

  // enqueue value into the queue
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  print("-values are pushed into the queue!\n");
  queue.output(); // output if content exists
  print("\n");

  // pop value from the top
  queue.dequeue();
  print("-pop the queue!\n");
  queue.output(); // output if content exists
  print("\n");

  // front of the queue
  cout << "-The front of the queue is: " << queue.front() << "\n\n";

  // size of the queue
  cout << "-The size is " << queue.size() << "\n";
  queue.output(); // output if content exists
  print("\n");
}