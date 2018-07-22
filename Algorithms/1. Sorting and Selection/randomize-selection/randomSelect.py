# python implementation of randomized selection
import random

# return the kth smallest element of list S
# for k from 1 to len(S)
def random_select(S, k):
  if len(S) == 1:
    return S[0]

  # creating L, E, and G sets
  pivot = random.choice(S) # pick random pivot element from S
  L = [x for x in S if x < pivot] # set of element < pivot
  E = [x for x in S if x == pivot] # set of element == pivot
  G = [x for x in S if x > pivot] # set of element > pivot

  # finding which set to recurvse on 
  if k <= len(L):
    return random_select(L, k) # k-th smallest is in smaller set
  elif k <= len(L) + len(E):
    return pivot # k-th smallest equal to the pivot set
  else:
    j = k - len(L) - len(E)
    return random_select(G, j) # k-th smallest is j-th in bigger set

# testing the random_select()
S = [5, 4, 3, 2, 1]
k = 4
print("\nGiven Set S:"),
print(S)
print("Given k ="),
print(k)
print

print("- The " + str(k) + "-th smallest element is:"),
print(random_select(S, k))