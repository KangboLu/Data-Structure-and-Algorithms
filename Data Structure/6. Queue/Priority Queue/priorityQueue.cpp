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
      // if empty, insert at index 0
      if (nItems == 0)
        queue[nItems++] = item;
      else {
        // start at the end of the queue
        int i = nItems-1;
        for (i; i >= 0; i--) {
          // if new item larger than current element
          if (item > queue[i]) 
            queue[i+1] = queue[i]; // shift upward
          else
            break; // finish shifting
        }
        queue[i+1] = item; // insert new item
        nItems++; // increament size counter
      }
    }

    // remove minimum item
    int remove() {
      return queue[--nItems];
    }

    // get minimum value
    int getMin() {
      return queue[nItems-1];
    }

    // check if it is empty
    bool isEmpty() {
      return nItems == 0;
    }

    // check if the queue is full
    bool isFull() {
      return nItems == maxSize;
    }
}