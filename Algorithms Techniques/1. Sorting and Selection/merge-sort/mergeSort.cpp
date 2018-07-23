// how to run: c++ mergeSort.cpp -std=c++11
#include <iostream>
#include <vector>
using namespace std;

// merge two parts of the sorted array
void merge(vector<int>& S1, vector<int>& S2, vector<int>& S) {
  int i = 0; // current S1 pointer location
  int j = 0; // current S2 pointer location
  while ((i+j) < S.size()) {
    if (j == S2.size() || (i < S1.size() && S1[i] < S2[j])) {
      S[i+j] = S1[i];
      i += 1;
    }
    else {
      S[i+j] = S2[j];
      j += 1;
    }
  }
}

// sort the array
void mergeSort(vector<int>& S) {
  // cout << "line 24\n";
  int n = S.size();
  // if the array has only 1 element
  if (n < 2)
    return;
  
  int mid = n / 2; // get mid position

  // divide the array into two halfs
  vector<int> S1;
  vector<int> S2;
  int i = 0;
  while (i < mid)
    S1.push_back(S[i++]);
  while (i < n)
    S2.push_back(S[i++]);

  // conquer with recursion
  mergeSort(S1); // recursively sort the first half
  mergeSort(S2); // recursively sort the second half
  merge(S1, S2, S); // merge both halves
}

int main() {
  cout << "Mergesort O(nlogn) Algorithm\n";
  vector<int> S{5,4,3,2,1};
  cout << "Before sorting: ";
  for (auto num: S)
    cout << num << " ";
  cout << endl;

  // run merge sort on given array
  mergeSort(S);
  cout << "After sorting: ";
  for (auto num: S)
    cout << num << " ";
  cout << endl;
}