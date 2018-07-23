// a simple implementation with vector
#include <iostream>
#include <vector>
using namespace std;

class ArrayQueue {
  public:
  vector<int> queue;
  int front() {return queue.front();} // peek the front of the queue
  int isEmpty() {return queue.empty();} // check if the queue is empty
  int size() {return queue.size();} // return the size of the queue
  void enqueue(int value) {queue.push_back(value);} // push value to back
  void dequeue() {if (!isEmpty()) queue.erase(queue.begin());} // pop oldest value
  void output() {
    // empty, no need for output
    if (queue.empty()) {
      cout << "queue is empty!" << endl;
      return;
    }

    // print out the values
    cout << "contents: ";
    vector<int> copy = queue;
    while (!copy.empty()) {
      cout << copy.front() << " ";
      copy.erase(copy.begin());
    }
    cout << endl;
  }
};

// print function
void print(string text) {cout << text;}

// test the queue
int main() {
  print("Array implementation of queue\n\n");

  // create a queue
  ArrayQueue queue;
  print("-queue created!\n");
  queue.output(); // output if content exists
  print("\n");

  // push value into the queue
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  print("-values are enqueued into the queue!\n");
  queue.output(); // output if content exists
  print("\n");

  // pop value from the top
  queue.dequeue();
  print("-dequeue the queue!\n");
  queue.output(); // output if content exists
  print("\n");

  // size of the staclk
  cout << "-The size is " << queue.size() << "\n";
  queue.output(); // output if content exists
  print("\n");
}