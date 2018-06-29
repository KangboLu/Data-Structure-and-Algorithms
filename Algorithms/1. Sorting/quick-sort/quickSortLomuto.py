""" Lomuto partition scheme Quick Sort"""

# partition the array
def partition(array, left, right):
  pivot = array[right] # choose rightmost element as pivot
  index = left # swap index be the start element

  # iterate the element and swap elements < pivot
  for j in range(left, right):
    if array[j] < pivot:
      array[index], array[j] = array[j], array[index]
      index += 1 # increment next index for swapping

  array[index], array[right] = array[right], array[index]
  return index

# divide array into halves
def quick_sort(array, left, right):
  if left < right:
    pivot = partition(array, left, right)
    quick_sort(array, left, pivot - 1)
    quick_sort(array, pivot + 1, right)

# testing the algorithm
print("Lomuto partition scheme------")
print("Quick sort O(nlogn) algorithm")

# array before sorting
array = [9, 8, 7, 6, 5, 4, 3, 2, 1]
print("Array before sorting")
print(array)

# test the quick sort algorithm
print("Array after sorting")
quick_sort(array, 0, len(array)-1)
print(array)