# Sequences

## Table of Contents

## Arrays in C
They're data sequences of the same type, they're all next to each other in memory, that is CONSECUTIVES. They're similar to Lists in Python, the only difference is that lists are objects of an integrated class called List which has a lot of atrributes that facilitates their use. In arrays what we care about is the first direction in memory of that array, C will never know the size of that array, an array is a memory position basically a pointer, there isnt another mechanism to access to an array only its pointer.

1. An array doesn't save its own size, that could only be achiavable if we store that value inside a variable.
2. The data stored in the array has to be from the same data type, that means an array only for int values, or floats values or char values. It's not like Python where you could have a list with ints, strings, another list of floats... and all kinds of data types inside the same list.

WIth the string library you can see the size of the words but not the size of the array. That is because you can define an array of str[100] and only store the word "Hello" so in memmory it'll look like

| H | e | l| l | o | \0 | ... | |
0x0                            0xhex(99)

The char \0 is an special character that indicates the end of the string, not the end of the array because we still have left 93 spaces to fill up the array. 100 is the max value we ask the OS to reserve space in memory (stack) for that specific array.

Static arrays vs dynamic arrays

If we want to specify the initial value of an array we should, not let the compiler take the decision for us.


