# linear search definition
def linear_search(array, target):
  for i in range(len(array)):
    if array[i] == target:
      return i # found it, return index
  return -1 # can't find it

# formatted linear search function output
def search_output(index):
  if index == -1:
    print("Given value is not in the array!")
  else:
    print("Found it! It's at index " + str(index))

#==============
#   TESTING   #
#==============

# create array
array = [1, 3, 8, 2, 9, 2, 5, 6]
print("- Created array with value [1, 3, 8, 2, 9, 2, 5, 6]")
print

# testing the function
print("- Searching for 2")
search_output(linear_search(array, 2))
print

print("- Searching for 10")
search_output(linear_search(array, 10))