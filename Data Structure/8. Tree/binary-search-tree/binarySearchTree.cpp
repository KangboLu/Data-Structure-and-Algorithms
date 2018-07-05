#include <iostream>
using namespace std;

// A Binary Tree Node
struct Node {
  int data;
  Node* left;
  Node* right;
  // node constructor
  Node(int value): data(value), left(NULL), right(NULL) {}
};

// create a new node
Node* newNode(int data) {
  Node* temp = new Node(data);
  return temp;
}

// inorder: left, root, right
void inorder(Node* node) {
  if (node == NULL) // reach leave node, go to prev level
    return;

  inorder(node->left); // recurse on left child
  cout << node->data << " "; // print the data of node
  inorder(node->right); // recurse on right child
}

// insert a new node with given data in BST
Node* insert(Node* node, int data) {
  // if the tree is empty
  if (node == NULL)
    return newNode(data);
  
  // recurse down the tree according to the comparison
  if (data < node->data)
    node->left = insert(node->left, data);
  else
    node->right = insert(node->right, data);
  
  // return the node pointer
  return node;
}

// return the minimum value in the BST
Node* minValueNode(Node* node) {
  // traverse down to find the leftmost leaf
  Node* current = node;
  while (current->left != NULL) 
    current = current->left;
  return current;
}

// delete the node and reutrn the new root
Node* deleteNode(Node* root, int data) {
  // base case: the tree is empty
  if (root == NULL) 
    return root;
  
  // if the data is less or greater than the root's left node
  if (data < root->data) {
    root->left = deleteNode(root->left, data);
  }
  else if (data > root->data) {
    root->right = deleteNode(root->right, data);
  }
  else { // found the target node
    // if the left is empty, move right node(s) up to the
    // the target node
    if (root->left == NULL) {
      Node* temp = root->right;
      root = NULL;
      return temp;
    }

    // if the right is empty, move left node(s) up to the
    // the target node
    else if (root->right == NULL) {
      Node* temp = root->left;
      root = NULL;
      return temp;
    }

    // the target node has 2 childs, find inorder successor
    Node* successor = minValueNode(root->right);
    root->data = successor->data;  // let new root be the successor
    root->right = deleteNode(root->right, successor->data); // delete successor
  }
  return root;
}

// ==============================
// testing the binary search tree
// ==============================
/* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

void print(string input) {
  cout << input << endl;
}

int main() {
  // create BST
  Node* root = NULL;
  root = insert(root, 50);
  root = insert(root, 30);
  root = insert(root, 20);
  root = insert(root, 40);
  root = insert(root, 70);
  root = insert(root, 60);
  root = insert(root, 80);
  cout << "- Created BST\n";

  // output the tree
  cout << "\n           50        \n"
       << "        /     \\      \n"
       << "       30      70     \n"
       << "      /  \\    /  \\   \n"
       << "    20   40  60   80  \n";

  print("- Inorder traversal of the given tree: left, root, right");
  inorder(root);
  print("\n");
  
  print("- Delete 20");
  root = deleteNode(root, 20);

  print("- Inorder traversal of the modified tree");
  inorder(root);
  print("\n");
  
  print("- Delete 30");
  root = deleteNode(root, 30);

  print("- Inorder traversal of the modified tree");
  inorder(root);
  print("\n");

  print("- Delete 50");
  root = deleteNode(root, 50);

  print("- Inorder traversal of the modified tree");
  inorder(root);
}