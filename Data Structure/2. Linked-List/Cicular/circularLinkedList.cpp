#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
  // node constructor
  Node(int value): data(value), next(NULL) {}
} *head = NULL;

// check if Linked list is empty
bool isEmpty() { return (head == NULL); }

// insert value to the front
void insertFront(int value) {
  Node* temp = new Node(value); // create a temporary node
  temp -> next = head; // node points to the front
  head = temp; // let new node be the head
}

// insert value to the back
void insertBack(int value) {
  Node* temp = new Node(value); // create a temporary node
  
  // first check if list is empty
  if (isEmpty()) {
    head = temp; // let temp be the first node
    return;
  }

  // not empty list, insert back
  Node* current = head;
  while (current -> next != NULL) // go the last node
    current = current -> next;
  current -> next = temp; // let temp be the last node
}

// insert value after a desired value
void insertAfterValue(int value, int desiredValue) {
  // iterate to desired value location (if exists)
  Node* current = head; 
  while (current != NULL && current -> data != desiredValue)
    current = current -> next; // go to next available node

  // if the desired value does not exist
  if (current == NULL) {
    cout << "Desired value " << desiredValue << " does not exist!" << endl;
  }
  // the desired value node exist, insert after it
  else {
    Node* temp = new Node(value);
    temp -> next = current -> next; // temp points to desired next location
    current -> next = temp; // let desired value node points to temp
    // original: Desired -> nextNode
    // now: Desired -> temp -> nextNode
  }
}

// delete the head of a linked list
void deleteHead() {
  if (isEmpty()) {
    cout << "List is empty! No need for deletion!" << endl;
  }
  // else the list is not empty, delete head
  else {
    Node* temp = head;
    head = head -> next; // let new head be the next node
    temp -> next = NULL; // let original head points to NULL
    delete temp; // delete original head in memory
  } 
}

// delete the tail of a linked list
void deletTail() {
  if (isEmpty())
    cout << "List is empty! No need for deletion!" << endl;

  // if head is the only node, delete head
  if (head -> next == NULL) {
    delete head;
    head = NULL;
    return;
  }
  // if the list has > 1 nodes, delete tail
  Node* temp = head;
  // let temp go the location before tail
  while (temp -> next -> next != NULL)
    temp = temp -> next;
  delete temp -> next; // delete tail
  temp -> next = NULL; // set temp to tail
}

// delete the whole list
void deleteList() {
  while (!isEmpty())
  	deleteHead();
}

// delete desired value in linked list
void deleteDesiredValue(int desiredValue) {
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

// find the linked list length recursively
int LengthRecursiveHelper(Node* current) {
  if (current == NULL) return 0;
  return (1 + LengthRecursiveHelper(current -> next));
}

int listLengthRecursive() {
  int length = LengthRecursiveHelper(head);
  cout << "List Length is " << length << endl;
}

// output list
void outputList() {
  // edge case: list is empty
  if (isEmpty()) {
    cout << "List is empty!" << endl;
    return;
  }

  Node* current = head;
  while (current != NULL) {
    cout << current -> data; // output current node's value
    current = current -> next; // move to next node
    if (current != NULL) cout << " -> ";
  }
  cout << endl;
}

int main() {
  // insert in the front
  cout << "\nDemonstrate insertFront() function\n";
  for (int i = 1; i < 5; i++) 
    insertFront(i);
  outputList(); // print the linked list

  // insert at the end
  cout << "\nDemonstrate insertBack() function\n";
  for (int i = 2; i < 5; i++) 
    insertBack(i);
  outputList(); // print the linked list

  // insert value after 1
  cout << "\nDemonstrate insertAfterValue() function\n";
  insertAfterValue(1, 1);
  outputList(); // print the linked list

  // delete tail
  cout << "\nDemonstrate deleteTail() function\n";
  deletTail();
  outputList(); // print the linked list

  // delete head
  cout << "\nDemonstrate deleteHead() function\n";
  deleteHead();
  outputList(); // print the linked list

  // delete a specified value
  cout << "\nDemonstrate deleteDesiredValue() function\n";
  deleteDesiredValue(1);
  outputList(); // print the linked list

  // search a specified value
  cout << "\nDemonstrate search() function\n";
  search(1);

  // length of a linkedin list
  cout << "\nFinding length iteratively: length = ";
  listLength(); 
  cout << "Finding length recursively: length = ";
  listLengthRecursive(); 

  // delete the list
  cout << "\nDemonstrate deleteList() function\n";
  deleteList();
  outputList(); // print the linked list
}