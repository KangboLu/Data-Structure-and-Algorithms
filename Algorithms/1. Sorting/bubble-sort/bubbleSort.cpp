// how to run: c++ -std=c++11 file.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int array[8] = {1, 3, 8, 2, 9, 2, 5, 6};
  int size = 8;

  cout << "Bubble Sort O(n^2) Algorithm:\n";

  // output the array before the sort
  cout << "Array before the sort: ";
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;

  // bubble sort algorithm: big-O: n^2
  for (int i = 0; i < size; i++)
    for (int j = 0; j < size-1; j++)
      if (array[j] > array[j+1])
        swap(array[j], array[j+1]);

  // output the array after the sort
  cout << "Array after the sort: ";
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}
