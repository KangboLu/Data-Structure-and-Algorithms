#include <iostream>
#include <queue>
using namespace std;

// A Binary Tree Node
struct Node {
  int data;
  struct Node* left;
  struct Node* right;
  // node constructor
  Node(int value): data(value), left(NULL), right(NULL) {}
};

// create a new node
Node* newNode(int data) {
  return new Node(data);
}

// Iterative method to find height of Bianry Tree
void printLevelOrder(Node *root) {
  // Base Case
  if (root == NULL)
    return;

  // Create an empty queue for level order traversal
  queue<Node *> q;

  // Enqueue Root and initialize height
  q.push(root);

  while (q.empty() == false) {
    // Print front of queue and remove it from queue
    Node *node = q.front();
    cout << node->data << " ";
    q.pop();

    // Enqueue left child 
    if (node->left != NULL)
      q.push(node->left);

    // Enqueue right child
    if (node->right != NULL)
      q.push(node->right);
  }
}

// Driver program to test above functions
int main() {
  // Let us create binary tree shown in above diagram
  Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  cout << "Level Order traversal(BFS) of binary tree is \n";
  printLevelOrder(root);
  return 0;
}