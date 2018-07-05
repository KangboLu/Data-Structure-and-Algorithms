// how to run: c++ -std=c++11 hashTable.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "Demonstrating STL Map Data structure:\n\n";

  // create a map where the keys are strings and the values are int
  map<string, int> m;
  
  // create keys and values pairs
  m["a"] = 1;
  m["b"] = 2;
  m["c"] = 3;
  m["d"] = 4;

  // output the value with given key
  cout << "m[\"c\"] is " << m["c"] << endl; // 3
  cout << "m[\"d\"] is " << m["d"] << endl; // 4

  // check if the key exists
  if (m.count("a"))
    cout << "key with \"a\" exists" << endl;
  else  
    cout << "key with \"a\" doesn't exists" << endl;

  // prints all the keys and values in a map
  cout << "==========================\n";
  cout << "Print out the key value pairs:\n";
  for (auto x : m)
    cout << x.first << " " << x.second << endl;
}