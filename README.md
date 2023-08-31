# Binary Trees Library

A library of binary tree functions implemented in C.

## Table of Contents

- [Introduction](#introduction)
- [Functions](#functions)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This library provides a set of functions for working with binary trees in C. Binary trees are hierarchical data structures 
commonly used in computer science and programming.

## Functions

The library includes the following functions:

- `binary_tree_node`: Creates a new binary tree node.
- `binary_tree_insert_left`: Inserts a node as the left child of another node.
- `binary_tree_insert_right`: Inserts a node as the right child of another node.
- `binary_tree_delete`: Deletes an entire binary tree.
- `binary_tree_is_leaf`: Checks if a node is a leaf.
- `binary_tree_is_root`: Checks if a node is a root.
- `binary_tree_preorder`: Performs pre-order traversal of a binary tree.
- `binary_tree_inorder`: Performs in-order traversal of a binary tree.
- `binary_tree_postorder`: Performs post-order traversal of a binary tree.
- `binary_tree_height`: Measures the height of a binary tree.
- `binary_tree_depth`: Measures the depth of a node in a binary tree.
- `binary_tree_size`: Measures the size of a binary tree.
- `binary_tree_leaves`: Counts the leaves in a binary tree.
- `binary_tree_nodes`: Counts nodes with at least 1 child in a binary tree.
- `binary_tree_balance`: Measures the balance factor of a binary tree.
- `binary_tree_is_full`: Checks if a binary tree is full.
- `binary_tree_is_perfect`: Checks if a binary tree is perfect.
- `binary_tree_sibling`: Finds the sibling of a node.
- `binary_tree_uncle`: Finds the uncle of a node.

## Usage

To use this library, include the `binary_trees.h` header file in your C code and link against the provided binary tree functions. 
You can refer to the function prototypes and documentation within the header file for usage details.

```c
#include "binary_trees.h"

int main(void) {
    // Example usage of binary tree functions
    // ...
    return 0;
}
