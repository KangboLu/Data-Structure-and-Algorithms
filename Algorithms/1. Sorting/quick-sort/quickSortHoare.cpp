// Hoare partition scheme Quick Sort
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
  int pivot = array[(left+right)/2]; // choose rightmost element for comparison

  // swap elements < pivot with current element in a loop
  while (left <= right) {
    while (array[left] < pivot) left++; // left element should be on the right 
    while (array[right] > pivot) right--; // right element should be on the left 

    // swap elements and move left and right indices
    if (left <= right)
      swap(array[left++], array[right--]);
  }
  return left;
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