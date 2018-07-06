# String Algorithms

## String terminology:

1. Substring: 
is a sequence of consecutive characters in a string.
A string of length n has *n(n+1)/2* subsequences.
2. Subsequences: 
is a sequence of character in a string in their original order
A string of length n has *2^(n) - 1* subsequences.
3. Prefix:
is a substring that starts at the beginning of a string.
Ex: ABCD's prefix: A, AB, ABC, ABCD
4. Suffix:
is a substring that ends at the end of the string
Ex: ABCD's suffix: D, CD, BCD, ABCD
5. Rotation: 
generation of string by moving the characters of a string one by one from the beginning to the end
Ex: ABCD's rotation: ABCD, BCDA, CDAB, DABC

## Z-algorithm
