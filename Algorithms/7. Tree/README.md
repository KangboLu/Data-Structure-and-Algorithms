# Tree Algorithms

## Tree Traversal

*1. Preorder: root, left, right*

*Algorithm:*
1. Visit the root
2. Traverse the left subtree: preorder(leftTree)
3. Traverse the right substree: preorder(rightTree)

*2. Inorder: left, root, right*

*Algorithm:*
1. Traverse the left subtree: inorder(leftTree)
2. Visit the root
3. Traverse the right subtree: inorder(rightTree)

3. Postorder: left, right, root

*Algorithm:*
1. Traverse the left subtree: postorder(leftTree)
2. Traverse the right subtree: postorder(rightTree)
3. Visit the root
