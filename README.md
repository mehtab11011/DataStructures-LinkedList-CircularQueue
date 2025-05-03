# Data Structures in C++

This repository contains **C++ implementations** of two fundamental data structures:
- **Singly Linked List**
- **Circular Queue**

Both implementations include basic operations and are explained with easy-to-understand comments, making it suitable for beginners.

---

## 🔗 Singly Linked List

### Overview

A **Singly Linked List** is a linear data structure where each element (node) points to the next element in the sequence. It allows dynamic memory allocation and efficient insertions/deletions at the head or any position.

### Key Operations

- **Insert at Head**: Adds a node at the beginning of the list.
- **Insert at Specific Position**: Allows inserting a node at a specific index in the list.
- **Delete from Front**: Removes the first node in the list.
- **Delete from Back**: Removes the last node in the list.
- **Search**: Finds the index of a specific value in the list.
- **Display**: Prints all the elements in the list.

### Code Overview

- **Node Class**: Represents a node with two members — `data` and `next` (a pointer to the next node).
- **Linked List Class**: Manages the nodes, including functions for insertion, deletion, search, and display.

### Code Walkthrough

1. **Node Class**:
   - The `Node` class contains an integer `data` and a pointer `next` which points to the next node in the list.
   
2. **LinkedList Class**:
   - The `LinkedList` class manages the linked list operations like inserting at the head, deleting from the front, inserting at specific positions, and displaying the list.
   - Memory is dynamically allocated for each node using `new`, and nodes are freed using `delete` when they are removed from the list.

### Example Usage

```cpp
Add_data list;
list.append(1);   // List: 1
list.append(2);   // List: 2 -> 1
list.append(3);   // List: 3 -> 2 -> 1
list.show();      // Output: 3 --> 2 --> 1 --> Null
list.pop_front(); // Removes 3 from the front
list.show();      // Output: 2 --> 1 --> Null
