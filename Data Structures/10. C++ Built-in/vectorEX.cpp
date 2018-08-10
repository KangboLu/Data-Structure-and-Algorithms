#include <bits/stdc++.h>
using namespace std;

int main() {
  // declare a vector
  vector<int> v;

  // push number into the vector
  v.push_back(3);
  v.push_back(2);
  v.push_back(5);
  v.push_back(4);

  // output the vector
  cout << "output the vector: ";
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;

  // output using shorter way
  cout << "Output using shorter way: ";
  for (auto x: v)
    cout << x << " ";
  cout << endl;

  // output the back of the vector
  cout << "Before removing the back:\n";
  cout << "back is: " << v.back() << endl;

  // remove the last element
  cout << "After removing the back:\n";
  v.pop_back();
  cout << "back is: " << v.back() << endl;
}