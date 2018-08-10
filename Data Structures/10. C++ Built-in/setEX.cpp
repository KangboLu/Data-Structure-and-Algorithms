#include <bits/stdc++.h>
using namespace std;

int main() {
  // create a set data structure
  set<int> s;

  // insert elements
  s.insert(3);
  s.insert(2);
  s.insert(1);

  // output the size and the elements
  cout << "Output the size and the elements:\n";
  cout << "The size is: " << s.size() << endl;
  cout << "The elements are: ";
  for (auto x: s) 
    cout << x << " ";
  cout << endl << endl;

  // output the occurrence of the number
  cout << "s.count(3): " << s.count(3) << endl;
  cout << "s.count(4): " << s.count(4) << endl;

  // erase a element and insert a new one
  s.erase(3);
  s.insert(4);
  cout << "---------------------\n";
  cout << "After s.erase(3) and s.insert(4): \n";
  cout << "s.count(3): " << s.count(3) << endl;
  cout << "s.count(4): " << s.count(4) << endl;
}