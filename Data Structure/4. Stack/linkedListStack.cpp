#include <iostream>
using namespace std;

// linked list implementation of stack
class linkedListStack {
  struct Node {
    int data; // values in stack
    Node* next; // the next pointer
    // node constructor
    Node(int value): data(value), next(NULL) {}
  };
  
  Node* head; // the head pointer
  int length; // track the number of nodes
  
  public:
  // default constructor
  linkedListStack() {
    head = NULL;
    length = 0;
  }

  // check if the stack is empty
  bool isEmpty() { return length == 0; }

   // return the size of the stack
  int size() { return length; }

  // peek the top of the stack
  int peek() { 
    if (isEmpty())
      cout << "stack is empty! No content in stack!" << endl;
    else
      return head -> data; 
  }

  // push to the top
  void push(int value) {
    // create an temporary object
    Node* newNode = new Node(value); // create a temporary node
    newNode -> next = head; // node points to the front
    head = newNode;// let new node be the head
    length++; // increament the stack size
  }; 

  // pop the top element
  void pop() {
    // check if the stack is empty
    if (isEmpty()) {
      cout << "stack is empty! No need for deletion!" << endl;
    }
    // not empty, pop the top of the stack
    else {
      Node* temp = head; // get a copy of the head
      head = head -> next; // let the head point to the next node
      temp -> next = NULL; // let original head points to NULL 
      delete temp; // delete the top
      length--;
    }
  }

  // output the entire stack
  void output() {
    if (isEmpty()) {
      cout << "No Contents in the stack!" << endl;
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

  // clear the stack
  void clear() {
    if (isEmpty()) {
      cout << "List is empty! No need for deletion!" << endl;
    }
    // else the list is not empty, delete head
    else {
      // while stack is not empty, pop it
      while (!isEmpty()) 
        pop();
    } 
  }
};

// print function
void print(string text) {cout << text;}

// testing the linked list version of stack
int main() {
  print("Linked List implementation of stack\n\n");

  // create a stack
  linkedListStack stack;
  print("- stack created!\n");
  stack.output(); // output if content exists
  print("\n");

  // push value into the stack
  stack.push(1);
  stack.push(2);
  stack.push(3);
  print("-values are pushed into the stack!\n");
  stack.output(); // output if content exists
  print("\n");

  // pop value from the top
  stack.pop();
  print("-pop the stack!\n");
  stack.output(); // output if content exists
  print("\n");

  // size of the staclk
  cout << "-The size is " << stack.size() << "\n";
  stack.output(); // output if content exists
  print("\n");
}