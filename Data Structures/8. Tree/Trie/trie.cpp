// a trie data structure implementation
#include <iostream>
#include <vector> 
using namespace std;

// a trie node
struct Node {
  Node* children[26]; // an array of trie node
  bool isEOW;
};

// return a new trie node
Node* newNode() {
  Node* node = new Node;
  node -> isEOW = false;
  for (int i = 0; i < 26; i++)
    node -> children[i] = NULL;
  return node;
}

// get index for the current key charactor
int getIndex(char key) {
  // the difference of stored key and 'a' is the index
  return key - 'a';
}

// insert key into trie
void insert(Node* root, string word) {
  Node* current = root;

  // iterate the word and assign new nodes
  for (int i = 0; i < word.length(); i++) {
    int index = getIndex(word[i]);
    // if the key is not present, add node to given index
    if (!current -> children[index])
      current -> children[index] = newNode();
    current = current -> children[index]; // let current be the last created node
  }
  current -> isEOW = true; // mark last node as leaf
}

// search a given key in the trie
bool search(Node* root, string word) {
  Node* current = root;
  for (int i = 0; i < word.length(); i++) {
    int index = getIndex(word[i]);
    if (!current -> children[index]) // node not found
      return false;
    current = current -> children[index];
  }
  return (current != NULL && current -> isEOW);
}

int main() {
  // create a trie
  vector<string> keys{"the", "a", "there", "answer", "any", "by", "bye", "their"};
  Node* root = newNode();
  for (string word : keys)
    insert(root, word);
  cout << "- Trie created!" << endl;
  
  // search the trie
  cout << "\n- Searching for \"the\":" << endl;
  if (search(root, "the")) 
    cout << "\"the\" exists in the trie\n";
  else 
    cout << "\"the\" doesn't exist";
  cout << "\n- Searching for \"that\":" << endl;
  if (search(root, "that")) 
    cout << "\"that\" exists in the trie\n";
  else 
    cout << "\"that\" doesn't exist";
}