# Binary Search Tree (BST) to Max Heap Conversion
This program demonstrates the conversion of a Binary Search Tree (BST) into a Max Heap.

## Description
Given a binary search tree, the program performs the following steps:

1. Performs an in-order traversal of the BST to obtain a sorted sequence of its elements.
2. Converts the BST into a Max Heap using the sorted sequence obtained from the traversal.
   
The program provides functions to perform an in-order traversal, BST to Max Heap conversion, and print the level order traversal of the tree.

## How to Use
1. Clone the repository or download the source files.
2. Compile the source code using a C++ compiler.
3. Run the compiled executable.
4. The program will print the BST before and after conversion to Max Heap.

## Sample Output
```bash
Copy code
BST before conversion to Max Heap by level order:
Level: 1
4
Level: 2
2 6
Level: 3
1 3 5 7

Max Heap after conversion:
Level: 1
7
Level: 2
6 4
Level: 3
2 1 3 5
```
