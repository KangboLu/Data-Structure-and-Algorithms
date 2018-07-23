// how to run: c++ binarySearchIterative.cpp -std=c++11
#include <iostream>
#include <vector>
using namespace std;

// iterative approach
int binarySearch(vector<int>& array, int left, int right, int target) {
  // check if the array is empty
  while (left <= right) {
    int mid = left + (right - 1) / 2; // calculate the mid element
    if (array[mid] == target) // found it in the middle
      return mid;
    if (array[mid] > target) // iterate the left half
      right = mid - 1;
    else // iterate the right half
      left = mid + 1;
  }
  // can't find it, return -1
  return -1;
}

int main() {
  cout << "\nIterative Binary Search O(logn) Algorithm:\n";
  vector<int> array{2,4,5,6,7,8};
  cout << "Array indexes:  0 1 2 3 4 5\n";
  cout << "Array contents: ";
  for (int item : array)
    cout << item << " ";
  cout << endl;

  // run binary search to find the element
  int index = binarySearch(array, 0, array.size()-1, 7);
  if (index == -1)
    cout << "Element 7 not present in the array!" << endl;
  else 
    cout << "Found 7 at index " << index << endl;
}