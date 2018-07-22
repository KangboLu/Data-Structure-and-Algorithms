// how to run: c++ -std=c++11 file.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "\nSelection Sort: O(n^2) algorithm\n";

  // declare a vector
  vector<int> array = {5, 4, 3, 2, 1};

  // array before the sort
  cout << "Array before the sort: ";
  for (auto item: array)
    cout << item << " ";
  cout << endl;

  // run selection sort
  for (int i = 0; i < array.size(); i++) {
    int minIndex = i; // record current location
    for (int j = i+1; j < array.size(); j++) {
      // if current value is not minimum, set minIndex to j
      if (array[minIndex] > array[j])
        minIndex = j;
    }
    // swap the current ith value with the minIndex value
    swap(array[i], array[minIndex]);
  }

  // array after the sort
  cout << "Array after the sort: ";
  for (auto item: array)
    cout << item << " ";
  cout << endl;
}
