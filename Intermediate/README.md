# Pointers
- A pointer is a variable that stores the memory address of another variable (or function). It points to the location of the variable in memory, and it allows you to access or modify the value indirectly. Here’s a general format to declare a pointer:

    ``dataType *pointerName;``

# References
- A reference is an alias for an existing variable, meaning it’s a different name for the same memory location. Unlike pointers, references cannot be null, and they must be initialized when they are declared. Once a reference is initialized, it cannot be changed to refer to another variable.

- Here’s a general format to declare a reference:

    ``dataType &referenceName = existingVariable;``

# Memory Model in C++
- The memory model in C++ defines how the program stores and accesses data in computer memory. It consists of different segments, such as the Stack, Heap, Data and Code segments. Each of these segments is used to store different types of data and has specific characteristics.

### Stack Memory
- Stack memory is used for automatic storage duration variables, such as `local variables` and `function call` data. Stack memory is `managed by the compiler`, and it’s allocation and deallocation are done automatically. The stack memory is also a LIFO (Last In First Out) data structure, meaning that the most recent data allocated is the first to be deallocated.

### Heap Memory
- Heap memory is used for dynamic storage duration variables, such as objects created using the `new` keyword. The programmer has control over the allocation and deallocation of heap memory using `new` and `delete` operators. Heap memory is a larger pool of memory than the stack, but has a slower access time.

### Data Segment
- The Data segment is composed of two parts: the initialized data segment and the uninitialized data segment. The initialized data segment stores `global, static, and constant variables` with initial values, whereas the uninitialized segment stores uninitialized global and static variables.

### Code Segment
- The Code segment (also known as the Text segment) stores the executable code (machine code) of the program. It’s usually located in a read-only area of memory to prevent accidental modification.


# Smart Pointers

## Unique Pointer (``unique_ptr``)
- ``std::unique_ptr`` is a smart pointer provided by the C++ Standard Library. It is a template class that is used for managing single objects or arrays.

- unique_ptr works on the concept of `exclusive ownership` - meaning only one unique_ptr is allowed to own an object at a time. This ownership can be transferred or moved, but it cannot be shared or copied.

- This concept helps to prevent issues like dangling pointers, reduce memory leaks, and eliminates the need for manual memory management. When the unique_ptr goes out of scope, it automatically deletes the object it owns.

