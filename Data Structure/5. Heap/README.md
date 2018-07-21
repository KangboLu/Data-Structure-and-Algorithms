# Binary Heap

## 1. Definition

A binary heap is a Complete Binary Tree.
A binary heap is commonly represented as array.

## 2. Element Access

The root node is at index 0
The left child node is access by index (2 * i) + 1
The right child node is access by index (2 * i) + 2

## 3. Two Types of Orderings

1. Min Heap:

The value of each node is greater than or equal to the value of its parent with min value at the root.

2. Max Heap:

The value of each node is less then or equal to the value of its parent with max value at the root.

## 4. Operations

1. `getMini()`: It returns the root element of Min Heap. Time Complexity of this operation is O(1).

2. `extractMin()`: Removes the minimum element from MinHeap. Time Complexity of this Operation is O(Logn) as this operation needs to maintain the heap property (by calling heapify()) after removing root.

3. `decreaseKey()`: Decreases value of key. The time complexity of this operation is O(Logn). If the decreases key value of a node is greater than the parent of the node, then we don’t need to do anything. Otherwise, we need to traverse up to fix the violated heap property.

4. `insert()`: Inserting a new key takes O(Logn) time. We add a new key at the end of the tree. IF new key is greater than its parent, then we don’t need to do anything. Otherwise, we need to traverse up to fix the violated heap property.

5. `delete()`: Deleting a key also takes O(Logn) time. We replace the key to be deleted calling decreaseKey(). After decreaseKey(), the minus infinite value must reach root, so we call extractMin() to remove the key.

