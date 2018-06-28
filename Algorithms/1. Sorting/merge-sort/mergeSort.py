def merge(S1, S2, S):
  # Merge two sorted Python lists S1 and S2 into properly sized list S
  i = 0; # current location of S1 pointer
  j = 0; # current location of S2 pointer
  while i+j < len(S):
    if j == len(S2) or (i < len(S1) and S1[i] < S2[j]):
      S[i+j] = S1[i] # copy ith element of S1 as next item of S
      i += 1; # increment S1 pointer index
    else:
      S[i+j] = S2[j] # copy jth element of S2 as next item of S
      j += 1; # increment S2 pointer index

def merge_sort(S):
  n = len(S)
  # if the list has only 1 element
  if n < 2:
    return 
  
  # divide the list
  mid = n // 2
  S1 = S[0:mid] # copy of first half
  S2 = S[mid:n] # copy of second half

  # conquer with recursion
  merge_sort(S1) # recursively sort the first half
  merge_sort(S2) # recursively sort the second half

  # merge the 2 sorted list
  merge(S1, S2, S)

def main():
  print("Mergesort O(nlogn) Algorithm")

  # before sorting
  print("Array before sorting:")
  array = [5,4,3,2,1]
  print(array)

  # after sorting
  merge_sort(array)
  print("Array after sorting:")
  print(array)

main();