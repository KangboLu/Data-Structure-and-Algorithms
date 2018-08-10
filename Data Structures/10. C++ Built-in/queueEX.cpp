#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;
  q.push(3);
  cout << "Push 3\n";
  q.push(2);
  cout << "Push 2\n";
  q.push(5);
  cout << "Push 5\n";

  cout << "q.front(): " << q.front(); // 3
  q.pop();
  cout << "\nAfter popping: \n";
  cout << "q.front(): " << q.front(); // 2
}