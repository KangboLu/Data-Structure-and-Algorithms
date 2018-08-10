#include <bits/stdc++.h>
using namespace std;

int main() {
  // create a multiset data structure
  multiset<int> s;

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
  cout << endl;
  cout << "After s.erase(3) and s.insert(4): \n";
  cout << "s.count(3): " << s.count(3) << endl;
  cout << "s.count(4): " << s.count(4) << endl;

  // testing multiset feature
  s.insert(5);
  s.insert(5);
  s.insert(5);
  cout << endl;
  cout << "Multiple occurrences of an element:" << endl;
  cout << "s.count(5): " << s.count(5) << endl;
  
  // erase one occurrence of an element
  s.erase(s.find(5));
  cout << endl;
  cout << "Erase one occurrence of an element:" << endl;
  cout << "s.count(5): " << s.count(5) << endl;

  // erase all occurrence of an element
  s.erase(5);
  cout << endl;
  cout << "Erase all occurrence of an element:" << endl;
  cout << "s.count(5): " << s.count(5) << endl;
}