// how to run: c++ -std=c++11 file.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "\nInsertion Sort: O(n^2) algorithm\n";

  // declare a vector
  vector<int> array = {5, 4, 3, 2, 1};

  // array before the sort
  cout << "Array before the sort: ";
  for (auto item: array)
    cout << item << " ";
  cout << endl;

  // run insertion sort
  for (int i = 1; i < array.size(); i++) {
    int current = array[i]; // get current value
    int j = i-1; // get previous value

    while (j >= 0 && array[j] > current) { // compare current with previous
      array[j+1] = array[j]; // copy previous to previous+1 location if prev > cur
      j = j-1; // move index to the left of previous
    }
    array[j+1] = current; // set the last prev > cur location to current value
  }

  // array before the sort
  cout << "Array after the sort: ";
  for (auto item: array)
    cout << item << " ";
  cout << endl;
}
