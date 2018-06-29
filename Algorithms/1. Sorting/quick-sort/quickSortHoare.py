""" Hoare partition scheme Quick Sort"""

# partition the array
def partition(array, left, right):
  pivot = array[(left+right)/2]; # choose rightmost element for comparison

  # swap elements < pivot with current element in a loop
  while left <= right:
    while array[left] < pivot: 
      left+=1; # index of left element should be on the right 
    while array[right] > pivot: 
      right-=1; # index of right element should be on the left 

    # swap elements and move left and right indices
    if left <= right:
      array[left], array[right] = array[right], array[left]
      left+=1
      right-=1
  return left;

# divide array into halves
def quick_sort(array, left, right):
  if left < right:
    pivot = partition(array, left, right)
    quick_sort(array, left, pivot - 1)
    quick_sort(array, pivot + 1, right)

# testing the algorithm
print("\nHoare partition scheme------")
print("Quick sort O(nlogn) algorithm:\n")

# array before sorting
array = [9, 8, 7, 6, 5, 4, 3, 2, 1]
print("Array before sorting")
print(array)

# test the quick sort algorithm
print("Array after sorting")
quick_sort(array, 0, len(array)-1)
print(array)