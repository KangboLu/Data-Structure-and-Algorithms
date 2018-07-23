# iterative binary search algorithm implementation
def binary_search(array, left, right, target):
  # check if the array is empty
  if right > 0:
    mid = left + (right - 1) / 2 # calculate the mid location
    if array[mid] == target: # the target is in the middle
      return mid
    if array[mid] > target: # recurse the left half
      return binary_search(array, left, mid-1, target)
    else: # recurse the right half
      return binary_search(array, mid+1, right, target)
  # can't find it in the array, return -1
  return -1

# testing the binary search algorithm
array = [1,2,3,4,5,6,7]
print("Array contents:")
print(array)

# search it
target_location = binary_search(array, 0, len(array)-1, 6)
if target_location == -1:
  print("Element 6 is not in the array")
else:
  print("Element 6 is at index " + str(target_location))
