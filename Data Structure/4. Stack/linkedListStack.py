# Node class
class Node:
  # constructor
  def __init__(self, data):
    self.data = data
    self.next = None

# a linked list implementation of stack
class LinkedListStack:
  # constructor
  def __init__(self):
    self.head = None
    self.length = 0

  # check if the stack is empty
  def is_empty(self):
    return self.length == 0

  # return the size of the stack
  def size(self):
    return self.length

  # peek the top of the stack
  def peek(self):
    # if empty
    if self.is_empty():
      print("The stack is empty! No content in stack")
    else:
      return self.head.data

  # push value to the top of the stack
  def push(self, value):
    temp = Node(value) # create a new node
    temp.next = self.head # let new node points to head
    self.head = temp # let temp be the new head
    self.length+=1 # increment the length of the stack
  
  # pop value from the stack top
  def pop(self):
    # if the stack if empty
    if self.is_empty():
      print("Stack is empty! No need for pop it Now!")
    else:
      temp = self.head
      self.head = self.head.next # let new head be the next node
      temp.next = None # let the old head points to nothing
      self.length-=1 # decrement the length of the stack
  
  # output the stack
  def output(self):
    # if empty
    if self.is_empty():
      print("No contents in the stack!")
    else:
      print("Contents: "),
      current = self.head
      while current != None:
        print(str(current.data) + " "),
        current = current.next # go to the next node until None
      print

# ============================
# testing the stack class
# ============================

print("\nLinked List implementation of stack!\n")

# create a new ArrayStack object
stack = LinkedListStack()
print("- New ArrayStack object created")
stack.output()

# push value into the stack
stack.push(1)
stack.push(2)
stack.push(3)
print("\n- New values are pushed into the stack")
stack.output()

# peek value
print("\n- Peek the top of the stack: " + str(stack.peek()))
print

# pop the top of the stack
stack.pop()
print("- Pop the top of the stack")
stack.output()

# get size of the stack
print("\n- Size of the stack: " + str(stack.size()))
print