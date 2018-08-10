#include <bits/stdc++.h>
using namespace std;

int main() {
  string a = "hatti";
  string b = a+a;
  cout << "a is: " << a << endl; 
  cout << "b is a+a: " << b << endl;

  b[5] = 'v';
  cout << "b after changing b[5]: " << b << endl;

  // get the substring of b at index 3 with length 4
  string c = b.substr(3,4); 
  cout << "c is b.substr(3,4): " << c << endl;
}