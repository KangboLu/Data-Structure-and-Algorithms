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

## Tries

## AVL

## Red Black Tree
