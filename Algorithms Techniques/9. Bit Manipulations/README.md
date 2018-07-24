# Bit Manipulations Notes:

## Common Bit Opereations

### 1. AND

The AND operation `x & y` produces a number that has one bits in positions where both x and y have 1 bit.

```c++
2 & 2 = 2 // 10 & 10 = 10
2 & 1 = 0 // 10 & 01 = 00
``` 

### 2. OR

The OR operation `x | y` produces a number that has one bits in posistions where at least one of x and y have 1 bit.

```c++
2 | 2 = 2 // 10 | 10 = 10
2 | 1 = 3 // 10 | 01 = 11
``` 

### 3. XOR

The XOR operation `x ^ y` produces a number that has one bits in positions where exactly one of x or y have 1 bit. If both have 1 bit, it returns 0.

```c++
2 ^ 2 = 0 // 10 ^ 10 = 00
2 ^ 1 = 3 // 10 ^ 01 = 11
```

### 4. NOT

The NOT operation `~x` produces a number where all the bits of x have been inverted.

```c++
// ~x = -x -1
// ex: 
// ~29 = -30, 
// ~-30 = 29
```

### 5. Shifts

*Left shift k bits* with 0 filling: `x << k`
*Right shift k bits* by removing last k bit: `x >> k`

*Application of Bit Shifting:*

1. Access k-th bit:

Because 1 << k has one bit in position k and all others are zero, we can use this expression to apply *AND* operation with the binary number: `x & (1 << k)`

```c++
// printing the int number x in binary format
for (int i = 31; i >= 0; i++) {
  if (x & (1 << i)) 
    cout << "1";
  else 
    cout << "0";
}
```

2. Set k-th bit to 1:
`x | (1 << k)`

3. Set k-th bit to 0:
`x & ~(1 << k)`


