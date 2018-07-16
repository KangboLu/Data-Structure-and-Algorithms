// array implementation of priority queue
#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
  // vector in sorted order, from max at 0 to min at size-1
  int maxSize;
  vector<int> queue;
  int nItems;
  
  public:
    // constructor
    PriorityQueue(int siz) {
      maxSize = siz;
      nItems = 0; 
      queue.resize(maxSize);
    }

    // insert item to the priority queue
    void insert(int item) {

    }

    // remove minimum item
    int remove() {

    }

    // get minimum value
    int getMin() {

    }

    // check if it is empty
    bool isEmpty() {

    }

    // check if the queue is full
    bool isFull() {
      
    }
}