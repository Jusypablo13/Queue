
---

# Queue Implementation in C++

This project demonstrates a basic implementation of a **Queue** data structure in C++ using three files: `Queue.h` (the header file), `Queue.cpp` (the implementation file), and `main.cpp` (the test file).

## What is a Queue?

A **queue** is a data structure that follows the **First In, First Out (FIFO)** principle. This means that the first item added to the queue will be the first one to be removed. You can think of a queue like a line of people waiting to buy something: the first person in line is the first one served, and new people join the end of the line.

### Key Operations of a Queue:
- **Enqueue**: Adds an element to the back of the queue.
- **Dequeue**: Removes an element from the front of the queue.
- **Front**: Retrieves the value at the front of the queue without removing it.

## Files in this Project:

1. **Queue.h**:  
   This file contains the definition of the `Queue` class, including the methods that operate on the queue (like `enqueue()`, `dequeue()`, and `frontValue()`).

2. **Queue.cpp**:  
   This file implements the methods defined in `Queue.h`. It contains the actual code for adding, removing, and accessing elements in the queue.

3. **main.cpp**:  
   This file demonstrates how to use the `Queue` class. It contains a simple example of how to create a queue, add elements to it, remove elements, and access the value at the front.

## How to Run the Code

### 1. Compile the Code:
To compile the project, open your terminal and run the following command:

```bash
clang++ -std=c++17 -stdlib=libc++ main.cpp Queue.cpp -o main
```

This will generate an executable file named `main`.

### 2. Run the Program:
After compiling, you can run the program with the following command:

```bash
./main
```

### Example Output:
The program will demonstrate how elements are added (enqueued), removed (dequeued), and how the front element is accessed:

```
Front value: 1
Front value after dequeue: 2
```

### Overview of the Code

#### Queue Class
- **Constructor (`Queue(int size)`)**: Initializes the queue with a specific capacity.
- **Destructor (`~Queue()`)**: Cleans up the dynamically allocated memory when the queue is no longer in use.
- **enqueue(int val)**: Adds an integer `val` to the end of the queue.
- **dequeue()**: Removes the element at the front of the queue and returns its value.
- **frontValue()**: Returns the value at the front of the queue without removing it.

#### main.cpp
In this file, we:
- Create a queue with a capacity of 5.
- Enqueue three integers into the queue.
- Display the value at the front.
- Dequeue an element and display the new front value.

### Example Code in `main.cpp`:

```cpp
#include <iostream>
#include "Queue.h"

int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    
    std::cout << "Front value: " << q.frontValue() << std::endl;
    q.dequeue();
    std::cout << "Front value after dequeue: " << q.frontValue() << std::endl;

    return 0;
}
```

### Summary
This project is a simple implementation of a queue data structure in C++, showing how to add, remove, and access elements in a queue. The `Queue` class provides basic queue operations, and the `main.cpp` file demonstrates how to use these operations.

---