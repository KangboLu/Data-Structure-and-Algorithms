#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> array, int target) {
  // searching element linearly -- O(n)
  for (int i = 0; i < array.size(); i++)
    if (array[i] == target) return i; 
  // if can't find it
  return -1;
}

int main() {
  cout << "Create array {1, 3, 8, 2, 9, 2, 5, 6}" << endl;
  vector<int> array{1, 3, 8, 2, 9, 2, 5, 6};
  int size = 8;
  int index = linearSearch(array, 3);
  if (index < 0) 
    cout << "Can't find it!" << endl;
  else 
    cout << "Found it at index: " << index << endl;
}