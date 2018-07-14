# Node class
class Node:
  # constructor
  def __init__(self, data):
    self.data = data
    self.next = None

# a linked list implementation of queue
class LinkedListQueue:
  # constructor
  def __init__(self):
    self.head = None
    self.length = 0

  # check if the queue is empty
  def is_empty(self):
    return self.length == 0

  # return the size of the queue
  def size(self):
    return self.length

  # peek the front of the queue
  def front(self):
    # if empty
    if self.is_empty():
      print("The queue is empty! No content in queue")
    else:
      return self.head.data

  # enqueue value to the top of the queue
  def enqueue(self, value):
    temp = Node(value) # create a new node
    
    # first check if the list is empty
    if self.is_empty():
      self.head = temp # let temp be the first node
      self.length += 1 # increment the size of the queue
      return
    else:
      # not empty, iterate and insert back
      current = self.head 
      while current.next != None:
        current = current.next # go to next node until None
      current.next = temp # let temp be the new last node
      self.length += 1 # increment the size of the queue
  
  # dequeue value from the queue top
  def dequeue(self):
    # if the queue if empty
    if self.is_empty():
      print("queue is empty! No need for dequeue it Now!")
    else:
      temp = self.head
      self.head = self.head.next # let new head be the next node
      temp.next = None # let the old head points to nothing
      self.length -= 1 # decrement the length of the queue
  
  # output the queue
  def output(self):
    # if empty
    if self.is_empty():
      print("No contents in the queue!")
    else:
      print("Contents: "),
      current = self.head
      while current != None:
        print(str(current.data) + " "),
        current = current.next # go to the next node until None
      print

# ============================
# testing the queue class
# ============================

print("\nLinked List implementation of queue!\n")

# create a new LinkedListQueue object
queue = LinkedListQueue()
print("- New ArrayStack object created")
queue.output()

# enqueue value into the queue
queue.enqueue(1)
queue.enqueue(2)
queue.enqueue(3)
print("\n- New values are pushed into the queue")
queue.output()

# peek the front of the queue
print("\n- Peek the front of the queue: " + str(queue.front()))
print

# dequeue the front of the queue
queue.dequeue()
print("- dequeue the front of the queue")
queue.output()

# get size of the queue
print("\n- Size of the queue: " + str(queue.size()))
print