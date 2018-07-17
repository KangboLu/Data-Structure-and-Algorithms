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

    // get number of item in the queue
    int getSize() {
      return nItems;
    }

    // check if the queue is full
    bool isFull() {
      return nItems == maxSize;
    }
};

int main() {
  cout << "Testing priority queue class\n\n";

  PriorityQueue pq(5);
  cout << "- Created a priority queue object with size 5\n";
  cout << "Queue Size is: " << pq.getSize() << endl;

  pq.insert(30);
  pq.insert(29);
  pq.insert(28);
  pq.insert(31);
  pq.insert(32);
  pq.insert(33);
  cout << "- Inserted values into priority queue\n";
  cout << "Queue Size is: " << pq.getSize() << endl;

  while (!pq.isEmpty()) {
    int top = pq.remove();
    cout << top << " ";
  }
  cout << "\n- Cleared values into priority queue\n";
  cout << "Queue Size is: " << pq.getSize() << endl;
}