Bitwise operators are used to perform operations on binary representations of integers. They operate on bits and can be used for various purposes such as setting, clearing, toggling, and checking bits.
And &
    0 0 1
    1 0 0
    0 1 0
    1 1 1
OR |
    0 0 0
    1 0 1
    0 1 1
    1 1 1

XOR ^
    0 0 0
    1 0 1
    0 1 1
    1 1 0
NOT ~
    0 1
    1 0
Left Shift <<
    Moves bits to the left, filling with zeros.
    Multiplies the number by 2 for each shift.
    Example: 5 << 1 = 10 (binary: 1010)
Right Shift >>            
    Moves bits to the right, filling with zeros or sign bit (for signed integers).
    Divides the number by 2 for each shift.
    Example: 10 >> 1 = 5 (binary: 0101)
Bitwise operators are often used in low-level   programming, graphics, cryptography, and performance optimization tasks. They allow for efficient manipulation of data at the bit level.

binary representation of integers: 
 
sum += char*2(n- i -1)