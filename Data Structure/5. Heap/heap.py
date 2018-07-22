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
    return self.heap_size

  # display the content of min heap
  def dispaly(self):
    if self.is_empty:
      self.heap_status

    for i in range(self.heap_size):
      print(str(self.heap_array[i])),
    print

  # insert new value to the min heap
  def insert(self, value):
    # the heap is full
    if self.heap_size == self.capacity:
      print("\nOverflow: Heap is full already!")
      return
    
    # insert the new key at the end
    self.heap_size += 1
    index = self.heap_size - 1
    self.up_heap(index, value)
    
  # decrease value of key at given index to new value
  def up_heap(self, index, value):
    # retain the min heap order by swapping parent with current key
    heap_array = self.heap_array
    heap_array[index] = value
    while index != 0 and heap_array[self.parent(index)] > heap_array[index]:
      # swap parent and the current node if parent > current value
      temp = heap_array[index]
      heap_array[index] = heap_array[self.parent(index)]
      heap_array[self.parent(index)] = temp
      index = self.parent(index) # move up the index to check min heap property

  # to heapify a subtree with the root at given index
  def min_heapify(self, index):
    # get left and right child index
    leftIdx = self.left(index)
    rightIdx = self.right(index)

    # find minIdx by comparing left or right with current node value
    minIdx = index
    heap_array = self.heap_array
    if leftIdx < self.heap_size and heap_array[leftIdx] < heap_array[index]:
      minIdx = leftIdx
    if rightIdx < self.heap_size and heap_array[rightIdx] < heap_array[minIdx]:
      minIdx = rightIdx

    # if the minIdx has been modified, swap the current value with value at minIdx
    if minIdx != index:
      heap_array[index], heap_array[minIdx] = heap_array[minIdx], heap_array[index]
      
      # recursively call heapify with new minIdx to create min heap
      self.min_heapify(minIdx)

  # remove minimum node from min heap
  def remove_min(self):
    # edge case: empty or only one element exists
    if self.get_size <= 0:
      print("Empty! No element to extract")
      return
    if self.get_size == 1:
      self.heap_size -= 1

    # store the min value, move lower right node to the top
    self.heap_array[0] = self.heap_array[self.heap_size-1]
    self.heap_size -= 1

    # call min_heapify with root node to restore the heap structure
    self.min_heapify(0)

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
minHeap.heap_status()

# display the heap content
print("- Display the min heap content:"),
minHeap.dispaly()
print

# get minimum value of the min heap
print("- Get the min value: " + str(minHeap.get_min()))
print

# get size  of the min heap
print("- Get the size: " + str(minHeap.get_size()))
print

# remove min value of the min heap object
minHeap.remove_min()
print("- After removing minimum value of min heap: "),
minHeap.dispaly()
print
