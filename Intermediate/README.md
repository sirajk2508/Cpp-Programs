# Pointers
- A pointer is a variable that stores the memory address of another variable (or function). It points to the location of the variable in memory, and it allows you to access or modify the value indirectly. Here’s a general format to declare a pointer:

    ``dataType *pointerName;``

# References
- A reference is an alias for an existing variable, meaning it’s a different name for the same memory location. Unlike pointers, references cannot be null, and they must be initialized when they are declared. Once a reference is initialized, it cannot be changed to refer to another variable.

- Here’s a general format to declare a reference:

    ``dataType &referenceName = existingVariable;``