// C++ program for different tree traversals
#include <iostream>
using namespace std;
 
// A binary tree node
struct Node {
  int data;
  struct Node* left;
  struct Node* right;
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};
 
// preorder: root, left, right
void printPreorder(struct Node* node) {
  if (node == NULL) // reach leave node, go to prev level
    return;

  cout << node->data << " "; // output the value
  printPreorder(node->left); // recurse on left subtree
  printPreorder(node->right); // recurse on right subtree
} 

// inorder: left, root, right
void printInorder(struct Node* node) {
  if (node == NULL) // reach leave node, go to prev level
    return;

  printInorder(node->left); // recurse on left child
  cout << node->data << " "; // print the data of node
  printInorder(node->right); // recurse on right child
}

// postorder: left, right, root
void printPostorder(struct Node* node) {
  if (node == NULL) // reach leave node, go to prev level
    return;

  printPostorder(node->left); // recurse on left subtree
  printPostorder(node->right); // recurse on right subtree
  cout << node->data << " ";  // output the value
}

// testing the functions
int main() {
  // create Nodes
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5); 

  // output binary tree
  cout << "Output the tree's structure:\n";
  cout << "      1            \n"
       << "     / \\          \n"
       << "    2   3         \n"
       << "   / \\              \n"
       << "  4   5            \n";

  // output different traversal approaches' results
  cout << "\nPreorder:  root, left, right\n";
  printPreorder(root);
  cout << "\nInorder:   left, root, right\n";
  printInorder(root); 
  cout << "\nPostorder: left, right, root\n";
  printPostorder(root);
}