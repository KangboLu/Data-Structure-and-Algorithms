// how to run: c++ mergeSort.cpp -std=c++11
#include <iostream>
#include <vector>
using namespace std;

// merge two parts of the sorted array
void merge(vector<int>& array, int low, int mid, int high) {
  // compare the vector and assign it to the temp
  vector<int> temp(array.size(), {0});
  int low1 = low, low2 = mid+1, i = low;
  for (low1, low2, i; low1 <= mid && low2 <= high; i++) {
    if (array[low1] <= array[low2])
      temp[i] = array[low1++];
    else
      temp[i] = array[low2++];
  }

  // assign rest values to the temp vector
  while (low1 <= mid)
    temp[i++] = array[low1++];
  while (low2 <= high)
    temp[i++] = array[low2++];
  
  // copy the sorted array to the original array
  for (i = low; i <= high; i++)
    array[i] = temp[i];
}

// sort the array
void sort(vector<int>& array, int low, int high) {
  if (low < high) {
    int mid = (low + high) / 2; // get mid position
    sort(array, low, mid); // sort the first half
    sort(array, mid+1, high); // sort the second half
    merge(array, low, mid, high); // merge both halves
  }
  else {
    return; // size check
  }
}

int main() {
  cout << "Mergesort O(nlogn) Algorithm\n";
  vector<int> array{9,8,7,6,5,4,3,2,1};
  cout << "Before sorting: ";
  for (auto num: array)
    cout << num << " ";
  cout << endl;

  // run merge sort on given array
  sort(array, 0, array.size()-1);
  cout << "After sorting: ";
  for (auto num: array)
    cout << num << " ";
  cout << endl;
}