#include <bits/stdc++.h>
using namespace std;

int main() {
  priority_queue<int> q;
  q.push(3);
  q.push(5);
  q.push(7);
  q.push(2);
  cout << "q.top(): " << q.top() << "\n"; // 7
  q.pop();
  cout << "pop once\n";
  cout << "q.top(): " << q.top() << "\n"; // 5
  q.pop();
  cout << "pop once\n";
  q.push(6);
  cout << "push 6\n";
  cout << "q.top(): " << q.top() << "\n"; // 6
  q.pop();
  cout << "pop once\n";
  cout << "q.top(): " << q.top() << "\n"; // 6
}