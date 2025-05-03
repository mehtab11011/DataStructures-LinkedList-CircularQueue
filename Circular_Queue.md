## 🔁 Circular Queue

### Overview

A **Circular Queue** is a linear data structure that follows the FIFO (First-In-First-Out) principle but optimizes space by connecting the end of the queue back to the front. It is implemented using an array and wraps around when the queue reaches its maximum capacity.

### Key Operations

- **Enqueue (Push)**: Adds an element to the rear of the queue.
- **Dequeue (Pop)**: Removes an element from the front of the queue.
- **Front**: Returns the front element without removing it.
- **Is Empty**: Checks if the queue is empty.
- **Display**: Prints all elements currently in the queue.

### Code Overview

- **Array-based Implementation**: The queue is implemented using an array and two pointers (`front` and `rear`) to track the positions of the first and last elements.
- **Circular Behavior**: The queue wraps around the array when the end is reached, allowing the space to be reused.

### Code Walkthrough

1. **Circular Queue Class**:
   - The `cq` class manages the queue operations, keeping track of the front and rear pointers, along with the current size of the queue.
   - Modulo arithmetic is used to implement the circular nature of the queue.

2. **Enqueue Operation**:
   - Adds an element to the `rear` of the queue and updates the `rear` pointer, ensuring it wraps around if it reaches the end of the array.

3. **Dequeue Operation**:
   - Removes the element at the `front` of the queue and updates the `front` pointer, wrapping it around as needed.

4. **Front Operation**:
   - Returns the element at the `front` without modifying the queue.

### Example Usage

```cpp
cq queue(3);      // Create a queue with capacity 3
queue.push(1);    // Queue: 1
queue.push(2);    // Queue: 1 -> 2
queue.push(3);    // Queue: 1 -> 2 -> 3
queue.pop();      // Removes 1 from the front
queue.push(4);    // Queue: 2 -> 3 -> 4
queue.display();  // Output: 2 3 4
