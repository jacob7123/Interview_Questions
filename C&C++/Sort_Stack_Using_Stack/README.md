# Merge Sort for Stack

This is a C++ implementation of merge sort for sorting a stack using the merge sort algorithm.

## How it Works

The code consists of two main functions:

1. `mergeStack`: This function merges two sorted stacks into one sorted stack. It takes two input stacks (`left` and `right`) and returns a new stack containing the merged elements.

2. `mergeSort`: This function recursively sorts a given stack using merge sort. It splits the stack into two halves, recursively sorts each half, and then merges the sorted halves using the `mergeStack` function.

## Usage

To use this code, simply include the provided header file and call the `mergeSort` function with your stack as the argument. Here's an example usage:

```cpp
#include <iostream>
#include <stack>
#include "merge_sort_stack.h" // Include the header file

int main() {
  // Create a stack and push some elements onto it
  std::stack<int> s;
  s.push(5);
  s.push(3);
  s.push(8);
  s.push(1);
  s.push(2);

  // Sort the stack using merge sort
  std::stack<int> sortedStack = mergeSort(s);

  // Print the sorted stack
  while (!sortedStack.empty()) {
    std::cout << sortedStack.top() << " ";
    sortedStack.pop();
  }

  return 0;
}
