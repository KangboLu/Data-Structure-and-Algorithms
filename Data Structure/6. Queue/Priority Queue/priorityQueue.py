# list implementation of priority queue
class PriorityQueue:
  # constructor
  def __init__(self, siz):
    self.nItems = 0
    self.queue = [0 for i in range(siz+1)]

  # insert operation
  def insert(self, item):
    # if empty, insert at index 0
    if self.nItems == 0:
      self.queue[self.nItems] = item
      self.nItems += 1
    else:
      # start the end of the queue
      i = self.nItems-1
      while i >= 0:
        # if new item larger than current element
        # move the smaller current item to the back
        if item > self.queue[i]:
          self.queue[i+1] = self.queue[i] # shift upward
        else:
          break
        i -= 1
      self.queue[i+1] = item # insert new item
      self.nItems += 1 # increment size counter
    
  # remove minimum item
  def remove(self):
    self.nItems -= 1
    return self.queue[self.nItems]
  
  # get minimum value
  def getMin(self):
    return self.queue[self.nItems-1]

  # check if it is empty
  def isEmpty(self):
    return self.nItems == 0
  
  # get number of item in the queue
  def getSize(self):
    return self.nItems

# ================================
# testing the PriorityQqueue class
# ================================

print("Testing priority queue class\n")

# create priority queue with size 5
pq = PriorityQueue(5)
print("- Created a priority queue object with size 5\n")
print("Queue size is: " + str(pq.getSize()) + "\n\n")

# insert values into the queue
pq.insert(30)
pq.insert(29)
pq.insert(28)
pq.insert(31)
pq.insert(32)
pq.insert(33)
print("- Inserted values into priority queue\n")
print("Queue size is: " + str(pq.getSize()) + "\n\n")

# clear the queue
while not pq.isEmpty():
  top = pq.remove()
  print(str(top) + " "),
print
print("- Cleared values for priority queue\n")
print("Queue size is: " + str(pq.getSize()) + "\n\n")