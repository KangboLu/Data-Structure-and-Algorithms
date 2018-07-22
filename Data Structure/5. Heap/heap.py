# a python implementation of min heap

# min heap class
class MinHeap:
  # constructor
  def __init__(self, size):
    self.capacity = size
    self.heap_array = [None for i in range(size)]
    self.heap_size = 0
  
  # check if empty
  def is_empty(self):
    return self.heap_size == 0

  # output the empty status
  def heap_status(self):
    if self.is_empty():
      print("The heap is empty")
    else:
      print("The heap is not empty")
    print # new line for better looking output

  # given an index, get parent index
  def parent(self, index):
    return (index - 1) / 2

  # given an index, get left child index
  def left(self, index):
    return (2 * index) + 1

  # given an index, get right child index
  def right(self, index):
    return (2 * index) + 2

  # return the minimum node from min heap
  def get_min(self):
    return self.heap_array[0]

  # get size of the heap
  def get_size(self):
    return heap_size

  # insert new value to the min heap
  def insert(self, value):
    # the heap is full
    if self.heap_size == self.capacity:
      print("\nOverflow: Heap is full already!")
      return
    
    # insert the new key at the end
    self.heap_size += 1
    index = self.heap_size - 1
    self.heap_array[index] = value

    # swap to maintain the min heap structure
    heap_array = self.heap_array
    while index != 0 and heap_array[self.parent(index)] > heap_array[index]:
      # swap parent and the current node if parent > current value
      temp = heap_array[index]
      heap_array[index] = heap_array[self.parent(index)]
      heap_array[self.parent(index)] = temp
      index = self.parent(index) # move up the index to check min heap property

# ============================
# testing the min heap class
# ============================

# create a empty heap with size 5
minHeap = MinHeap(5)
print("\n- Min Heap Created")
minHeap.heap_status()

# insert new values to the heap
minHeap.insert(3)
minHeap.insert(2)
minHeap.insert(5)
minHeap.insert(4)
minHeap.insert(1)
print("- Inserted values: 3 2 5 4 1")