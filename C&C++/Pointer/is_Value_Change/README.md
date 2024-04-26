# Pointer Assignment in C++
This program demonstrates pointer assignment in C++ and its effects on memory allocation.

## Description

# [Practice1](./Practice1.cpp)
The program defines a function fn that takes a pointer to an integer as a parameter. Inside the function:

1. It dynamically allocates memory for an integer variable b.
2. Assigns the value 2 to the memory location pointed to by b.
3. Assigns the address of b to the pointer p.
   
In the main function:

1. It declares an integer variable a and initializes it to 5.
2. Declares a pointer p and assigns the address of a to it.
3. Prints the value pointed to by p before calling the function fn.
4. Calls the function fn and passes the pointer p.
5. Prints the value pointed to by p again after calling the function fn.

## Sample Output
```bash
5
5
```

## Why
The value does not change because of how pointers are passed to functions in C++.

In the `fn` function:

1. It allocates memory dynamically for an integer variable `b`.
2. Assigns the value `2` to the memory location pointed to by `b`.
3. Assigns the address of `b` to the local pointer `p`.

However, `p` is a local variable within the fn function. When you assign `b` to `p`, you are modifying the local pointer `p`, not the pointer `p` in the main function. Therefore, the change made to `p` inside the fn function does not affect the pointer `p` in the main function.
