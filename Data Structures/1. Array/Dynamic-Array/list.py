# python list is dynamic but heterogeneous
# create an list
print("Create a list: ")
my_list = ["a", "b", "c", 1, 2, 3]

# get length
print("get the list length: ")
len(my_list)

# access element: list's index starts at 0
print("access the list: ")
my_list[0] # return "a"
my_list[:] # all the elements in a list
my_list[0:3] # elements from index 0 to index < 3, which is 2

# iterate elements
print("iterate the list: ")
for i in my_list:
    print i

# modify the list
print("modify the list: ")
my_list[2] = "2"
my_list[2]

# reverse() method reverse a list
print("reverse the list")
my_list.reverse()

# sort() method sort the list from low to high
print("sort the list")
my_list.sort()

# append() method add a new item to the end of a list
print("append 4 to the end of the list")
my_list.append(4)
print(my_list) # "a", "b", "c", 1, 2, 3, 4

# pop() method pop the last element off the list
print("pop the last element of the list")
my_list = ["a", "b", "c", 1, 2, 3]
my_list.pop() # now the last element is gone

# del deletes an elemnt at a given index
print("delete element at index 4")
del my_list[4] # now element at index 4 is gone
