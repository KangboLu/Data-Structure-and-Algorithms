# a circular linked list implemention

# Node class
class Node:
  # constructor 
  def __init__(self, data):
    self.data = data
    self.next = None

# circular linkedin list class
class circularLinkedList(object):
  # constructor
  def __init__(self):
    self.head = None
  
  # check if the list is empty
  def is_empty(self):
    if self.head == None:
      return True
    return False

  # output the empty status
  def linked_list_status(self):
    if self.is_empty():
      print("The list is empty")
    else:
      print("The list is not empty")
    print

  # get last node
  def get_last_node(self):
    # if the list has 0 or 1 lement, return head
    if self.is_empty() or self.head.next == None:
      return self.head
    
    # iterate the list until reach the tail
    current = self.head # copy head
    while current.next != self.head:
      current = current.next
    return current
  
  # append node to the back
  def append(self, value):
    newNode = Node(value) # create a new node

    # check if the list is empty
    if self.is_empty():
      self.head = newNode # let new node be the head
      return
    
    # the list is not empty
    tail = self.get_last_node() # get the last node
    tail.next = newNode # point tail to the new node
    newNode.next = self.head # point newNode to the head

  # delete a specific value of the list
  def delete_value(self, value):
    # if the list is empty
    if self.is_empty():
      print("The list is empty!")
      return
    
    # if the head is wanted node
    if self.head.data == value:
      tail = self.get_last_node() # get tail
      tail.next = head.next # tail points to new head
      self.head = self.head.next # assign new head
      return
    
    # iterate the list to find the value
    temp = self.head
    prev = None
    while temp.next != self.head and temp.data != value:
      prev = temp
      temp = temp.next
    
    # if reached a cycle and not found
    if temp == self.head:
      print("Specified value is not in the list!")
    else:
      prev.next = temp.next # set prev to temp node
      temp.next = None
  
  # search a specified value
  def search(self, value):
    currentNode = self.head
    while currentNode.next != self.head and currentNode.data != value:
      currentNode = currentNode.next
    
    # if not found
    if currentNode.data != value:
      print("Search value is not in the list!");
    else:
      print("Search Value Founded!")

  # print the lined list values
  def print_list(self):
    # if the list is empty
    if self.is_empty():
      print "Nothing to print for empty list"
      return
    
    # not empty, iterate and print nodes
    currentNode =self.head
    tail = self.get_last_node()
    while currentNode.next != self.head:
      print(str(currentNode.data) + " ->"),
      currentNode = currentNode.next
    print(tail.data)

# ============================
# testing the LinkedList class
# ============================

# create a empty linked list object
linked_list = circularLinkedList()
print("- Linked List Created")
linked_list.linked_list_status()

# insert elements to the front of the list
for i in range(0, 6):
  linked_list.append(i)
print("- Elements are appended to the back!")
linked_list.print_list()
linked_list.linked_list_status()

# delete a specified value of the list
linked_list.delete_value(5)
print("- Value 5 of the list is deleted!")
linked_list.print_list()
linked_list.linked_list_status()

# search a specified value of the list
print("- Try search 5!")
linked_list.search(5)
print("- Try search 4!")
linked_list.search(4)
linked_list.print_list()
linked_list.linked_list_status()