# simple implementation with list
class ArrayStack:
  # constructor
  def __init__(self):
    self.stack = [];

  # check if the stack is empty
  def is_empty(self):
    return len(self.stack) == 0

  # peek the top of the stack
  def peek(self):
    # if empty
    if self.is_empty():
      print("The stack is empty!")
    return self.stack[-1] # not empty, peek it

  # push value into the stack
  def push(self, value):
    self.stack.append(value)
  
  # pop the top of the stack
  def pop(self):
    # if empty
    if self.is_empty():
      print("The stack is empty!")
      return
    self.stack.pop() # pop if not empty

  # size of the stack
  def size(self):
    return len(self.stack)
  
  # output the stack
  def output(self):
    if self.is_empty():
      print("stack is empty!")
    print("contents: "),
    print(self.stack[::-1])
    print

# ============================
# testing the stack class
# ============================

print("\nList implementation of stack!\n")

# create a new ArrayStack object
stack = ArrayStack()
print("- New ArrayStack object created")
stack.output()

# push value into the stack
stack.push(1)
stack.push(2)
stack.push(3)
print("- New values are pushed into the stack")
stack.output()

# peek value
print("- Peek the top of the stack: " + str(stack.peek()))
print

# pop the top of the stack
stack.pop()
print("- Pop the top of the stack")
stack.output()

# get size of the stack
print("- Size of the stack: " + str(stack.size()))
print