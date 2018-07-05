# a binary tree node
class Node:
  def __init__(self, data):
    self.data = data
    self.left = None
    self.right = None

# print binary tree in preorder: root, left, right
def print_preorder(node):
  if node == None: # reached leaf node, go back to prev level
    return
  
  print(str(node.data) + " "), # output the current value
  print_preorder(node.left) # recurse on left subtree
  print_preorder(node.right) # recurve on right subtree

# print binary tree in inorder: left, root, right
def print_inorder(node):
  if node == None: # reached leaf node, go back to prev level
    return
  
  print_inorder(node.left) # recurse on left subtree
  print(str(node.data) + " "), # output the current value
  print_inorder(node.right) # recurse on right subtree

# print binary tree in postorder: left, right, root
def print_postorder(node):
  if node == None: # reached leaf node, go back to prev level
    return
  
  print_postorder(node.left) # recurse on left subtree
  print_postorder(node.right) # recurse on right subtree
  print(str(node.data) + " "), # output the value

# ================================
# testing the traversal approaches
# ================================
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

# output binary tree
print("Output the tree's structure:")
print("      1   ")
print("     / \\ ")
print("    2   3 ")
print("   / \\   ")
print("  4   5   ")

# output different traversal approaches' results
print("\n- Preorder:  root, left, right")
print_preorder(root)
print("\n- Inorder:   left, root, right")
print_inorder(root)
print("\n- Postorder: left, right, root")
print_postorder(root)