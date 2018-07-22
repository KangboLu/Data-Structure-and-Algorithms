print("\nBubble Sort O(n^2) Algorithm\n")

# create a array for testing
array = [5, 4, 3, 2, 1]

# output the array before sorting
print("Array before sorting: ")
print(array)

# perform bubble sort
length = len(array)
for i in range(length):
    for j in range(length-1):
        if array[j] > array[j+1]:
            array[j], array[j+1] = array[j+1], array[j]

# output sorted array
print("Array after sorting: ")
print(array)
