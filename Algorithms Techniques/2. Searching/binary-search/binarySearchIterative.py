# iterative binary search algorithm implementation
def binary_search(array, left, right, target):
  # check if the array is empty
  while left <= right:
    mid = left + (right - 1) / 2 # calculate the mid location
    if array[mid] == target: # if target is the mid value
      return mid
    if array[mid] > target: # iterate the left half
      right = mid - 1
    else: # iterate the right half
      left = mid + 1
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
