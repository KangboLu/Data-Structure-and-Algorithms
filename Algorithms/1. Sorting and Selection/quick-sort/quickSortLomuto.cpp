// Lomuto partition scheme Quick Sort
#include <iostream>
#include <vector>
using namespace std;

// swap function
void swap(int* num1, int* num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

// Lomuto partition scheme
int partition(vector<int>& array, int left, int right) {
  int pivot = array[right]; // choose rightmost element for comparison
  int index = left; // swap element index

  // swap elements < pivot with current element in a loop
  for (int j = left; j < right; j++) {
    if (array[j] < pivot) {
      swap(array[index], array[j]);
      index++; // increment next index for swapping
    }
  }
  swap(array[index], array[right]);
  return index;
}

// divide the array and sort it
void quickSort(vector<int>& array, int left, int right) {
  if (left < right) {
    int pivot = partition(array, left, right);
    quickSort(array, left, pivot-1);
    quickSort(array, pivot+1, right);
  }
}

int main() {
  cout << "Lomuto partition scheme------\n";
  cout << "Quick sort O(nlogn) algorithm\n";
  vector<int> array{5,4,3,2,1};
  cout << "Before sorting: ";
  for (auto num: array)
    cout << num << " ";
  cout << endl;

  // run quicksort algorithm
  quickSort(array, 0, array.size()-1);
  cout << "After sorting: ";
  for (auto num: array)
    cout << num << " ";
  cout << endl;
}