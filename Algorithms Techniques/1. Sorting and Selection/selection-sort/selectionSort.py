print("Selection Sort: O(n^2) Algorithm")

# create an array for testing
array = [64, 25, 12, 22, 11]

# array before sorting
print("Array before sorting:")
print(array)

# run selection sort
for i in range(len(array)):
    # Find the minimum element in remain unsorted array
    min_idx = i
    for j in range(i+1, len(array)):
        if array[min_idx] > array[j]: # current location is not minimum
            min_idx = j

    # Swap the found minimum element with current ith element
    array[i], array[min_idx] = array[min_idx], array[i]

# array after sorting
print("Array after sorting:")
print(array)
