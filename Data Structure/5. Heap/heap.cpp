// A C++ program to demonstrate common Binary Heap Operations
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// A class for Min Heap
class MinHeap {
  vector<int> heapArray; // array representation of heap
  int capacity; // maximum possible size of min heap
  int heap_size; // Current number of elements in min heap

  public:
  // Constructor to initialize heap properties
  MinHeap(int siz) {
    heap_size = 0;
    capacity = siz;
    heapArray.resize(siz);
  }

  // is empty?
  bool isEmpty() { return heap_size == 0; }

  // get parent index of given index i
  int parent(int i) { return (i-1) / 2; }

  // get index of left child of node at index i
  int left(int i) { return (2 * i + 1); }

  // get index of right child of node at index i
  int right(int i) { return (2 * i + 2); }

  // return the minimum key (key at root) from min heap
  int getMin() { return heapArray[0]; }

  // get size of the heap
  int getSize() { return heap_size; }

  // inserts a new value
  void insertKey(int value) {
    if (heap_size == capacity){
      cout << "\nOverflow: Could not insert anymore\n";
      return;
    }

    // insert the new key at the end
    heap_size++;
    int i = heap_size - 1;
    heapArray[i] = value;

    // swap to fix the min heap property if it is violated
    while (i != 0 && heapArray[parent(i)] > heapArray[i]) {
      // swap the parent and the current key is parent > current key
      int temp = heapArray[i];
      heapArray[i] = heapArray[parent(i)];
      heapArray[parent(i)] = temp;
      i = parent(i); // move up the index to check min heap property
    }
  }

  // change value of key at index 'i' to new_val
  void decreaseKey(int i, int new_val) {
    // retain the min heap order by swapping parent with current key
    heapArray[i] = new_val;
    while (i != 0 && heapArray[parent(i)] > heapArray[i]) {
      // swap the parent and the current key is parent > current key
      int temp = heapArray[i];
      heapArray[i] = heapArray[parent(i)];
      heapArray[parent(i)] = temp;
      i = parent(i); // move up the index to check min heap property
    }
  }

  // to heapify a subtree with the root at given index
  void minHeapify(int i) {
    // get left and right child index
    int minIdx = i;
    int leftIdx = left(i);
    int rightIdx = right(i);

    // find minIdx by comparing left and child index with current index value
    if (leftIdx < heap_size && heapArray[leftIdx] < heapArray[i])
        minIdx = leftIdx;
    if (rightIdx < heap_size && heapArray[rightIdx] < heapArray[minIdx])
        minIdx = rightIdx;

    // if the minIdx has been changed, swap the current value with minIdx value
    if (minIdx != i) {
      swap(heapArray[i], heapArray[minIdx]);

      // recursively call heapify with new minIdx to create min heap 
      minHeapify(minIdx);
    }
  }

  // remove minimum element (or root) from min heap
  void removeMin() {
    if (getSize() <= 0)
      cout << "Empty! No element to extract!";
    if (heap_size == 1)
      heap_size--;

    // store the minimum value, move lower right element to top
    heapArray[0] = heapArray[heap_size-1];
    heap_size--;
    
    // call minHeapif() with root node to restore the heap structure
    minHeapify(0);
  }

  // deletes a key stored at index i
  void deleteKey(int i) {
    decreaseKey(i, INT_MIN); // move up the element to delete
    removeMin(); // remove the top
  }

  // display heap array
  void display() {
    for (int i = 0; i < heap_size; i++)
      cout << heapArray[i] << " ";
    cout << endl;
  }
};

// testing the min heap class
int main() {
  cout << "Testing min heap implementation: \n" << endl;

  // create min heap object
  MinHeap heap(5);
  cout << "- Created min heap object with size 5\n" << endl;

  // insert values into the heap
  heap.insertKey(3);
  heap.insertKey(2);
  heap.insertKey(5);
  heap.insertKey(4);
  heap.insertKey(1);
  cout << "- Inserted values: 3 2 5 4 1\n" << endl;

  // display the inside of heap array
  cout << "- Display the content of min heap: ";
  heap.display();
  cout << endl;

  // get minimum element of the min heap
  cout << "- Get minimum value of min heap: ";
  cout << heap.getMin() << "\n" << endl;
  
  // remove minimum value of min heap
  heap.removeMin();
  cout << "- After removing minimum value of min heap: ";
  heap.display();
  cout << endl;

  // delete a given key
  heap.deleteKey(5);
  cout << "- After deleteting key 5: ";
  heap.display();
  cout << endl;

  // insert value 1
  heap.insertKey(1);
  cout << "- Inserted value 1: ";
  heap.display();
  cout << endl;
}