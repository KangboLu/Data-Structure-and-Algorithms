// a simple implementation with vector
#include <iostream>
#include <vector>
using namespace std;

class ArrayStack {
  public:
  vector<int> stack;
  int peek() {return stack.back();} // peek the top of the stack
  int isEmpty() {return stack.empty();} // check if the stack is empty
  int size() {return stack.size();} // return the size of the stack
  void push(int value) {stack.push_back(value);} // push value to the top
  void pop() {if (!isEmpty()) stack.pop_back();} // pop recent value
  void output() {
    // empty, no need for output
    if (stack.empty()) {
      cout << "stack is empty!" << endl;
      return;
    }

    // print out the values
    cout << "contents: ";
    vector<int> copy = stack;
    while (!copy.empty()) {
      cout << copy.back() << " ";
      copy.pop_back();
    }
    cout << endl;
  }
};

// print function
void print(string text) {cout << text;}

// test the stack
int main() {
  print("Array implementation of stack")

  // create a stack
  ArrayStack stack;
  print("-stack created!\n");
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