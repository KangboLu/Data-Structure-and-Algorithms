// how to run: c++ -std=c++11 hashTable.cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
  cout << "Demonstrating STL Map Data structure:\n\n";

  // create a map where the keys are strings and the values are int
  map<string, int> hashTable;
  
  // create keys and values pairs
  hashTable["a"] = 1;
  hashTable["b"] = 2;
  hashTable["c"] = 3;
  hashTable["d"] = 4;

  // output the value with given key
  cout << "Access value with given key:" << endl;
  cout << "m[\"c\"] is " << hashTable["c"] << endl; // 3
  cout << "m[\"d\"] is " << hashTable["d"] << endl; // 4

  // search a key if the key exists
  cout << "\nSearch value with key \"a\"\n";
  if (hashTable.count("a"))
    cout << "key with \"a\" exists" << endl;
  else  
    cout << "key with \"a\" doesn't exists" << endl;

  // prints all the keys and values in a map
  cout << "==========================\n";
  cout << "Map contains following elements before erase operation" << endl;
  for (auto i = hashTable.begin(); i != hashTable.end(); i++)
    cout << i->first << " " << i->second << endl;

  // erase a key value pair
  hashTable.erase("a");
  cout << "==========================\n";
  cout << "Map contains following elements after erase operation" << endl;
  for (auto i = hashTable.begin(); i != hashTable.end(); i++)
    cout << i->first << " " << i->second << endl;
}

