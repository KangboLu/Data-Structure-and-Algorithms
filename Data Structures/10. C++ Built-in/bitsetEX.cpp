#include <bits/stdc++.h>
using namespace std;

int main() {
  // declaring  bitset data structure
  bitset<10> s;
  s[1] = 1;
  s[3] = 1;
  s[4] = 1;
  s[5] = 1;
  s[7] = 1;
  
  // output the bit in the bitset
  cout << "s[4]: " << s[4] << endl; // 1
  cout << "s[6]: " << s[6] << endl; // 0

  // using bitset with string
  bitset<10> str(string("0010011010"));
  cout << "str[4]: "<< str[4] << endl; // read from right to left: 1
  cout << "str[5] " << str[5] << endl; // read from right to left: 0

  // bit operations
  cout << "-bit operations: \n";
  bitset<10> a(string("0010110110"));
  bitset<10> b(string("1011011000")); 
  cout << "(a&b): " << (a&b) << endl; // 0010010000
  cout << "(a|b): " << (a|b) << endl; // 0010010000
  cout << "(a^b): " << (a^b) << endl; // 0010010000
}