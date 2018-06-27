# a singly linked list example

# Node class
class Node:
  # constructor
  def __init__(self, data):
    self.data = data
    self.next = None

# linked list class
class LinkedList(object):
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
    print # new line for better looking output

  # insert node to the front
  def insert_front(self, value):
    temp = Node(value) # create a new node
    temp.next = self.head # let head be the new node's next node
    self.head = temp # let temp be the new head

  # insert node to the back
  def insert_back(self, value):
    temp = Node(value) # create a new node

    # first check if the list is empty
    if self.is_empty():
      self.head = temp # let temp be the head because list is empty
      return
    
    # the list is not empty, iterate to the back
    currentNode = self.head
    while currentNode.next != None:
      currentNode = currentNode.next # go to next node until None
    
    # let the tail's next node be the new node
    currentNode.next = temp # insert to the back

  # insert after a specified value
  def insert_after_value(self, value, specified):
    # value = the new value
    # specified = the old specifed value node
    currentNode = self.head # let current be the head

    # iterate to find the location of specified value
    while currentNode != None and currentNode.data != specified:
      currentNode = currentNode.next # go to next node
    
    # if specified value not found
    if currentNode == None:
      print("Specified Value is not in the list!")
    else: # specified value is in the list
      temp = Node(value) # create a new node
      temp.next = currentNode.next # let new node points to specified's next node
      currentNode.next = temp # let specified node points to the new node

  # delete the front of the list
  def delete_front(self):
    # if list is empty
    if self.is_empty():
      print("List is empty!")
    else:
      temp = self.head
      self.head = self.head.next # let new head be the next node
      temp.next = None # let the old head points to nothing

  # delete the back of the list
  def delete_back(self):
    # if list is empty
    if self.is_empty():
      print("List is empty!")
      return

    # if only one node in the list
    if self.head.next == None:
      self.head = None
      return

    # if more than one exist
    currentNode = self.head
    while currentNode.next.next != None:
      currentNode = currentNode.next # go the location before tail
    currentNode.next = None

  # delete a specified value
  def delete_specified(self, specified):
    # if list is empty
    if self.is_empty():
      print("List is empty!")
      return
    
    # not empty, find it and delete it if exist
    # if head is the wanted node
    if self.head.data == specified:
      temp = self.head # record the head location
      self.head = self.head.next # let new head be the next node
      temp.next = None # let old head points to nothing
      return

    # if head is not the node and list length > 1
    currentNode = self.head
    previousNode = None
    while currentNode != None and currentNode.data != specified:
      previousNode = currentNode # record previous location
      currentNode = currentNode.next # go to next node until end or found location

    # if not found
    if currentNode == None:
      print("Specified value is not in the list!")
    else:
      previousNode.next = currentNode.next # let previousNode points to specifed's next
      currentNode.next = None # let specified node points to nothing

  # search a specified value
  def search(self, value):
    currentNode = self.head
    while currentNode != None and currentNode.data != value:
      currentNode = currentNode.next
    
    # if not found
    if currentNode == None:
      print("Search value is not in the list!");
    else:
      print("Search Value Founded!")
  
  # print the linked list values
  def print_list(self):
    # if the list is empty
    if self.is_empty():
      print("List is empty!")
      return

    # not empty, iterate and print it
    currentNode = self.head # let currentNode be the head node
    while currentNode.next != None:
      print(str(currentNode.data) + " ->"),
      currentNode = currentNode.next # go to next node until None
    print(currentNode.data) # print last node

# ============================
# testing the LinkedList class
# ============================

# create a empty linked list object
linked_list = LinkedList()
print("- Linked List Created")
linked_list.linked_list_status()

# insert elements to the front of the list
for i in range(0, 6):
  linked_list.insert_front(i)
print("- Elements are inserted to the front!")
linked_list.print_list()
linked_list.linked_list_status()

# insert elements to the back of the list
for i in range(-1, -6, -1):
  linked_list.insert_back(i)
print("- Elements are inserted to the back!")
linked_list.print_list()
linked_list.linked_list_status()

# insert element after a specified value
print("- Try insert -7 after value -6!")
linked_list.insert_after_value(-7, -6)
print("- Try insert -6 after value -5!")
linked_list.insert_after_value(-6, -5)
linked_list.print_list()
linked_list.linked_list_status()

# delete the front of the list
linked_list.delete_front()
print("- The front of the list is deleted!")
linked_list.print_list()
linked_list.linked_list_status()

# delete the back of the list
linked_list.delete_back()
print("- The back of the list is deleted!")
linked_list.print_list()
linked_list.linked_list_status()

# delete a specified value of the list
linked_list.delete_specified(-5)
print("- Value -5 of the list is deleted!")
linked_list.print_list()
linked_list.linked_list_status()

# search a specified value of the list
print("- Try search -5!")
linked_list.search(-5)
print("- Try search -4!")
linked_list.search(-4)
linked_list.print_list()
linked_list.linked_list_status()