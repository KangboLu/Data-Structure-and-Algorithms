print("\nInsertion Sort: O(n^2) Algorithm\n")

# create a list for testing the algorithm
array = [5, 4, 3, 2, 1]

# array before sorting
print("Array before sorting:")
print(array)

# run insertion sort
for i in range(1, len(array)):
    current = array[i]
    j = i-1

    while j >= 0 and array[j] > current:
        array[j+1] = array[j]
        j = j-1
    array[j+1] = current

# array after sorting
print("Array after sorting:")
print(array)
