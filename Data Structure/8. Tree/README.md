# Tree

A tree is an abstract data type that stores elements hierarchically. 
With the exception of the top element, each element in a tree has a parent 
element and zero or more children elements. 

A tree is usually visualized by placing elements inside
ovals or rectangles, and by drawing the connections between parents and children
with straight lines. 

We typically call the top element the root of the tree, but it is drawn as the highest element, 
with the other elements being connected below.

## Binary Tree

A binary tree is an ordered tree with the following properties:
1. Every node has at most two children.
2. Each child node is labeled as being either a left child or a right child.
3. A left child precedes a right child in the order of children of a node.
The subtree rooted at a left or right child of an internal nodev is called aleft subtree
or right subtree, respectively, of v. 
A binary tree is proper if each node has either zero or two children. 
Some people also refer to such trees as being full binary
trees. Thus, in a proper binary tree, every internal node has exactly two children.

*Properties:*

1. The maximum nodes at level l is 2^(l-1)
2. The maximum nodes in a binary tree with level h is 2^(h) - 1
3. A Binary Tree with L leaves has at least ⌈ Log2L ⌉ + 1 levels l, property #1
4. For a Binary Tree with N nodes, minimum possible height h is ⌈ Log2(N+1) ⌉, property #2
5. In Binary tree where every node has 0 or 2 children, number of leaf nodes is always one more than nodes with two children

*Types of Binary Tree:*

1. Full Binary Tree: A Binary Tree is full if every node has 0 or 2 children.
In a Full Binary, number of leaf nodes is number of internal nodes plus 1: L = I + 1
Where L = Number of leaf nodes, I = Number of internal nodes
2. Complete Binary Tree: A Binary Tree is complete Binary Tree if all levels are completely 
filled except possibly the last level and the last level has all keys as left as possible
3. Perfect Binary Tree: A Binary tree is Perfect Binary Tree in which all internal nodes have two children and all leaves are at same level.

## Binary Search Tree

Binary Search Tree is a node-based binary tree data structure which has the following properties:

* The left subtree of a node contains only nodes with keys lesser than the node’s key.
* The right subtree of a node contains only nodes with keys greater than the node’s key.
* The left and right subtree each must also be a binary search tree.
* There must be no duplicate nodes.

## Tries

Trie is an *efficient data structure for searching words in dictionaries*.
Search complexity with Trie is linear in terms of word (or key) length to be searched. 
If we store keys in binary search tree, a well balanced BST will need time proportional to M log N, where M is maximum string length and N is number of keys in tree. 
Using trie, we can *search the key in O(M) time*, which is faster than BST (Binary Search Tree).

Hashing also provides word search in O(n) time on average. 
But the advantages of Trie are there are no collisions (like hashing) so worst case time complexity is O(n). 
Also, the most important thing is Prefix Search. With Trie, we can find all words beginning with a prefix (This is not possible with Hashing). 
The only *problem with Tries* is that trie requires a lot of extra space. 
Tries are also known as radix tree or prefix tree.

## AVL

## Red Black Tree
