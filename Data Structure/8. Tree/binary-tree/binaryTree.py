# a binary tree node class
class Node:
  def __init__(self, data):
    self.data = data
    self.left = None
    self.right = None

# bfs algorithm
def printLevelOrder(root):
  # base case
  if root == None:
    return
  
  # create an empty list for level order traversal
  queue = []
  queue.append(root) # enqueue root and initailize height

  while len(queue):
    temp = queue[0]
    print(str(temp.data) + " "),
    queue.remove(queue[0])

    # add left child 
    if temp.left: queue.append(temp.left)
    if temp.right: queue.append(temp.right)

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.right.right = Node(5)

print("Level order traversal(BFS) of binary tree is")
printLevelOrder(root)
