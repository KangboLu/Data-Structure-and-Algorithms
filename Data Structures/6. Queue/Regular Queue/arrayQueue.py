# simple implementation with list
class ArrayQueue:
  # constructor
  def __init__(self):
    self.queue = []

  # check if the queue is empty
  def is_empty(self):
    return len(self.queue) == 0

  # peek the front of the queue
  def front(self):
    # if empty
    if self.is_empty():
      print("The queue is empty!")
    return self.queue[0] # not empty, peek it

  # enqueue value into the queue
  def enqueue(self, value):
    self.queue.append(value)
  
  # dequeue the top of the queue
  def dequeue(self):
    # if empty
    if self.is_empty():
      print("The queue is empty!")
      return
    self.queue.remove(self.queue[0]) # dequeue the front of the queue

  # size of the queue
  def size(self):
    return len(self.queue)
  
  # output the queue
  def output(self):
    if self.is_empty():
      print("queue is empty!")
    print("contents: "),
    print(self.queue[:])
    print

# ============================
# testing the queue class
# ============================

print("\nList implementation of queue!\n")

# create a new ArrayStack object
queue = ArrayQueue()
print("- New ArrayQueue object created")
queue.output()

# enqueue value into the queue
queue.enqueue(1)
queue.enqueue(2)
queue.enqueue(3)
print("- New values are pushed into the queue")
queue.output()

# peek value
print("- Peek the front of the queue: " + str(queue.front()))
print

# pop the top of the queue
queue.dequeue()
print("- Pop the top of the queue")
queue.output()

# get size of the queue
print("- Size of the queue: " + str(queue.size()))
print