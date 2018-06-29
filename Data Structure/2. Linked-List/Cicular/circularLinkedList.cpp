// class version of circular linked list in cpp
#include <iostream>
using namespace std;

class circularLinkedList {
  // Node structure
  struct Node {
    int data;
    Node* next;
    // node constructor
    Node(int value): data(value), next(NULL) {}
  };

  Node* head; // head of the list

  public:
  // constructor to initialize values
  circularLinkedList() { head = NULL; }

  // check if Linked list is empty
  bool isEmpty() { return (head == NULL); } 

  // get last node
  Node* getLastNode() {
    // if the list has 0 or 1 element, return head
    if (isEmpty() || head->next == NULL) 
      return head;

    // iterate the list until reached the end
    Node* current = head; // copy head
    while (current -> next != head)
      current = current -> next;
    return current; // return the tail
  }

  // insert value to the front
  void append(int value) {
    Node* newNode = new Node(value);
    //If list is empty
    if (isEmpty()) {
      head = newNode; // let the newNode be the head
      return;
    }
    else {
      Node* tail = getLastNode(); // getting the last node
      tail -> next = newNode; // list's tail points to the newNode
      newNode -> next = head; // let newNode points to the head
    } 
  }

  // delete desired value in linked list
  void deleteValue(int desiredValue) {
    // first check if empty
    if (isEmpty()) {
      cout << "List is empty! Can't delete nothing!" << endl;
      return;
    }

    // create temp and prev node for iterations
    Node* temp = head;
    Node *prev = NULL;

    // if the head is the desired value
    if (head -> data == desiredValue) {
      head = head -> next; // let the next node be new head
      temp -> next = NULL; // let original head points to NULL
      delete temp; // delete original head
      return;
    }

    // iterate the linked list to find the desiredValue
    while (temp != NULL && temp -> data != desiredValue) {
      prev = temp; // set prev to the temp node
      temp = temp -> next; // let temp be the next node
    }

    // desired value does not exist
    if (temp == NULL) {
      cout << "Desired value does not exist in linked list" << endl;
    }
    // desire value exist, delete it
    else {
      prev -> next = temp -> next; // let prev node points to temp's next node
      temp -> next = NULL; // let desired node points to NULL
      delete temp; // delete the desired node
    }
  }

  // search the desired value
  void search(int desiredValue) {
    Node* temp = head;
    // iterate the list to find the desired value
    while (temp != NULL && temp -> data != desiredValue)
      temp = temp -> next;
    
    // if the desired value does not exist
    if (temp == NULL)
      cout << "Desired Value Not Found!" << endl;
    else
      cout << "Desired Value Found in the list" << endl;
  }

  // find the linked list length
  void listLength() {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
      length += 1;
      temp = temp -> next;
    }
    cout << "List Length is: " << length << endl;
  }

  // output list
  void outputList() {
    // edge case: list is empty
    if (isEmpty()) {
      cout << "List is empty!" << endl;
      return;
    }

    // while current node does not reach a cycle
    Node* current = head;
    Node* tail = getLastNode();
    while (current -> next != head) {
      cout << current -> data << " -> "; // output current node's value
      current = current -> next; // move to next node
    }
    cout << tail -> data << endl;
    cout << "reached one cycle" << endl;
    cout << endl;
  }
};

int main() {
  // create an linked list
  circularLinkedList list;

  // insert in the front
  cout << "\nDemonstrate insertBack() function\n";
  for (int i = 1; i < 10; i++) 
    list.append(i);
  cout << "Insert Successfully!\n";
  list.outputList(); // print the linked list
  cout << "Output Successfully!\n";

  // delete a specified value
  cout << "\nDemonstrate deleteValue() function\n";
  list.deleteValue(1);
  list.outputList(); // print the linked list

  // search a specified value
  // cout << "\nDemonstrate search() function\n";
  // list.search(1);

  // length of a linkedin list
  // cout << "\nFinding length iteratively: length = ";
  // list.listLength();s
}