// c library
#include <ctime>
#include <cstdlib>

// c++ library
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// function to return random pivot
int randomPivot(vector<int>& array) {
  return array[rand() % array.size()];
}

// function to return k-th smallest element
int randomSelect(vector<int>& S, int k) {
  if (S.size() == 1)
    return S[0];

  // creating L, E, and G set
  int pivot = randomPivot(S); // pick random pivot element from S
  vector<int> L; // set of element < pivot
  vector<int> E; // set of element == pivot
  vector<int> G; // set of element > pivot
  for (int i = 0; i < S.size(); i++) {
    if (S[i] < pivot)
      L.push_back(S[i]);
    else if (S[i] == pivot)
      E.push_back(S[i]);
    else
      G.push_back(S[i]);
  }

  // finding which set to recurvse on 
  if (k <= L.size()) // k-th smallest is in smaller set
    return randomSelect(L, k);
  else if (k <= L.size() + E.size()) // k-th smallest equal to the pivot set
    return pivot;
  else // k-th smallest is j-th in bigger set
    return randomSelect(G, k - L.size() - E.size());
}

int main(void) {
  // create input array and k value for selection
  vector<int> S{1,2,3,4,5};
  int k = 2;

  // output input content
  cout << "\nGiven Set S: ";
  for (int i = 0; i < S.size(); i++)
    cout << S[i] << " ";
  cout << endl;
  cout << "k = " << k << endl;

  // run randomized selection algorithm
  srand(time(0));
  cout << "\nThe " << k << "-th smallest element is: " << randomSelect(S, k);
}