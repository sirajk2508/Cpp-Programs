# What is C++?
- C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language. It was first introduced in 1985 and provides object-oriented features like classes and inheritance. C++ is widely used in various applications like game development, system programming, embedded systems, and high-performance computing.

- C++ is a statically-typed language, meaning that the type of a variable is determined during compilation, and has an extensive library called the C++ Standard Library, which provides a rich set of functions, algorithms, and data structures for various tasks.

- C++ builds upon the features of C, and thus, most C programs can be compiled and run with a C++ compiler.

`-------------------------------------------------------------------------------------------------------------------------------`

# Why C++
- C++ is a popular and widely used programming language for various reasons. Here are some of the reasons why you might choose to utilize C++:

### Performance
- C++ is designed to provide high performance and efficiency. It offers fine-grained control over system resources, making it easier to optimize your software.

### Portability
- C++ is supported on different computer architectures and operating systems, allowing you to write portable code that runs on various platforms without making major modifications.

### Object-Oriented Programming
- C++ supports object-oriented programming (OOP) - a paradigm that allows you to design programs using classes and objects, leading to better code organization and reusability.

### Support for low-level and high-level programming
- C++ allows you to write both low-level code, like memory manipulation, as well as high-level abstractions, like creating classes and using the Standard Template Library (STL).

### Extensive Libraries
- C++ offers a vast range of libraries and tools, such as the Standard Template Library (STL), Boost, and Qt, among others, that can aid in the development of your projects and make it more efficient.

### Combination with C language
- C++ can be combined with C, offering the capabilities of both languages and allowing you to reuse your existing C code. By incorporating C++ features, you can enhance your code and improve its functionality.

## Performance
- C++ is designed to provide high performance and efficiency. It offers fine-grained control over system resources, making it easier to optimize your software.

## Portability
- C++ is supported on different computer architectures and operating systems, allowing you to write portable code that runs on various platforms without making major modifications.

## Object-Oriented Programming
- C++ supports object-oriented programming (OOP) - a paradigm that allows you to design programs using classes and objects, leading to better code organization and reusability.

## Support for low-level and high-level programming
- C++ allows you to write both low-level code, like memory manipulation, as well as high-level abstractions, like creating classes and using the Standard Template Library (STL).

## Extensive Libraries
- C++ offers a vast range of libraries and tools, such as the Standard Template Library (STL), Boost, and Qt, among others, that can aid in the development of your projects and make it more efficient.

## Combination with C language
- C++ can be combined with C, offering the capabilities of both languages and allowing you to reuse your existing C code. By incorporating C++ features, you can enhance your code and improve its functionality.

- C++ has been around for a long time and has a large, active community of users who contribute to the growth of the language, express new ideas, and engage in discussions that help develop the language further. This makes finding solutions to any problems you experience much easier.

- In summary, C++ offers a great balance of performance, portability, and feature set, making it a versatile and powerful programming language suitable for many applications. With its extensive libraries, active community, and continuous development, C++ is an excellent choice for any software development project.

`-------------------------------------------------------------------------------------------------------------------------------`

# C vs C++
- C and C++ are two popular programming languages with some similarities, but they also have key differences. C++ is an extension of the C programming language, with added features such as object-oriented programming, classes, and exception handling. Although both languages are used for similar tasks, they have their own syntax and semantics, which makes them distinct from each other.

## Syntax and Semantics

## C
- C is a procedural programming language.
- Focuses on functions and structured programming.
- Does not support objects or classes.
- Memory management is manual, using functions like malloc and free.

## C++
- C++ is both procedural and object-oriented.
- Supports both functions and classes.
- Incorporates different programming paradigms.
- Memory management can be manual (like C) or rely on constructors/destructors and smart pointers.
  

## Code Reusability and Modularity

#### C
- Code reusability is achieved through functions and modular programming.
- High cohesion and low coupling are achieved via structured design.
- Function libraries can be created and included through headers.

#### C++
- Offers better code reusability with classes, inheritance, and polymorphism.
- Code modularity is enhanced through namespaces and well-designed object-oriented hierarchy.

## Error Handling

#### C
- Error handling in C is done primarily through return codes.
- Lacks support for exceptions or any built-in error handling mechanism.
- 
#### C++
- Offers exception handling, which can be used to handle errors that may occur during program execution.
- Enables catching and handling exceptions with try, catch, and throw keywords, providing more control over error handling.

`-------------------------------------------------------------------------------------------------------------------------------`

# Introduction to C++
- C++ is a general-purpose, high-performance programming language. It was developed by Bjarne Stroustrup at Bell Labs starting in 1979. C++ is an extension of the C programming language, adding features such as classes, objects, and exceptions.

### Basics of C++ Programming
- Here are some basic components and concepts in C++ programming:

#### Including Libraries
**Basics of C++ Programming**
- Here are some basic components and concepts in C++ programming:

**Including Libraries**
- In C++, we use the #include directive to include libraries or header files into our program. For example, to include the standard input/output library, we write:
    ```cpp
    #include<iostream>
    ```

#### Main Function
 **Main Function**
- The entry point of a C++ program is the main function. Every C++ program must have a main function:
    ```cpp
    int main() {
        // Code goes here
        return 0;
    }
    ```

#### Input/Output
**Input/Output**
- To perform input and output operations in C++, we can use the built-in objects `std::cin` for input and `std::cout` for output, available in the iostream library.

`-------------------------------------------------------------------------------------------------------------------------------`


# Variables and Data Types
- C++ has several basic data types for representing integer, floating-point, and character values:

* int: integer values
* float: single-precision floating-point values
* double: double-precision floating-point values
* char: single characters

#### Control Structures
- C++ provides control structures for conditional execution and iteration, such as `if`, `else`, `while`, `for`, and `switch` statements.

#### Functions
- Functions are reusable blocks of code that can be called with arguments to perform a specific task. Functions are defined with a return type, a name, a parameter list, and a body.


## Control Structures
C++ provides control structures for conditional execution and iteration, such as `if`, `else`, `while`, `for`, and `switch` statements.

## Functions
- Functions are reusable blocks of code that can be called with arguments to perform a specific task. Functions are defined with a return type, a name, a parameter list, and a body.

`-------------------------------------------------------------------------------------------------------------------------------`

# Basic Operations in C++

#### Arithmetic Operations
- `Addition(+)`, `Subtraction(-)`, `Multiplication(*)`, `Division(/)`, `Modulus(%)`

#### Relational Operators
- These operators compare two values and returns a boolean(`true / false`) value depending on comparison.
- `Equal to(==)`, `Not Equal to(!=)`, `Greater than(>)`, `Less than(==)`, `Greater than or equal to(>=)`, `Less than or Equal to(<=)`

#### Logical Operators
- Logical operators are used for combining multiple conditions or boolean values.
- `AND(&&)`, `OR(||)`, `NOT(!)`

#### Bitwise Operations
- Bitwise operations are operations that directly manipulate the bits of a number. Bitwise operations are useful for various purposes, such as optimizing algorithms, performing certain calculations, and manipulating memory.


# Lambda Functions in C++
- A lambda function, or simply “lambda”, is an anonymous (unnamed) function that is defined in place, within your source code, and with a concise syntax. Lambda functions were introduced in C++11 and have since become a widely used feature, especially in combination with the Standard Library algorithms.

## Syntax
Here is a basic syntax of a lambda function in C++:

`` `cpp
[capture-list](parameters) -> return_type {
    // function body
};
`` `

- **capture-list**: A list of variables from the surrounding scope that the lambda function can access.
- **parameters**: The list of input parameters, just like in a regular function. Optional.
- **return_type**: The type of the value that the lambda function will return. This part is optional, and the compiler can deduce it in many cases.
- **function body**: The code that defines the operation of the lambda function.

## Arithmetic Operations
- `Addition(+)`, `Subtraction(-)`, `Multiplication(*)`, `Division(/)`, `Modulus(%)`

## Relational Operators
- These operators compare two values and returns a boolean(`true / false`) value depending on comparison.
- `Equal to(==)`, `Not Equal to(!=)`, `Greater than(>)`, `Less than(==)`, `Greater than or equal to(>=)`, `Less than or Equal to(<=)`

## Logical Operators
- Logical operators are used for combining multiple conditions or boolean values.
- `AND(&&)`, `OR(||)`, `NOT(!)`

## Bitwise Operations
- Bitwise operations are operations that directly manipulate the bits of a number. Bitwise operations are useful for various purposes, such as optimizing algorithms, performing certain calculations, and manipulating memory in lower-level programming languages like C and C++.

**Bitwise AND (`&`)**
- The bitwise AND operation (`&`) is a binary operation that takes two numbers, compares them bit by bit, and returns a new number where each bit is set (1) if the corresponding bits in both input numbers are set (1); otherwise, the bit is unset (0).

**Bitwise OR (`|`)**
- The bitwise OR operation (`|`) is a binary operation that takes two numbers, compares them bit by bit, and returns a new number where each bit is set (1) if at least one of the corresponding bits in either input number is set (1); otherwise, the bit is unset (0).

**Bitwise XOR (`^`)**
- The bitwise XOR (exclusive OR) operation (`^`) is a binary operation that takes two numbers, compares them bit by bit, and returns a new number where each bit is set (1) if the corresponding bits in the input numbers are different; otherwise, the bit is unset (0).

**Bitwise NOT (`~`)**
- The bitwise NOT operation (`~`) is a unary operation that takes a single number, and returns a new number where each bit is inverted (1 becomes 0, and 0 becomes 1).

**Bitwise Left Shift (`<<`)**
- The bitwise left shift operation (`<<`) is a binary operation that takes two numbers, a value and a shift amount, and returns a new number by shifting the bits of the value to the left by the specified shift amount. The vacated bits are filled with zeros.

**Bitwise Right Shift (`>>`)**
The bitwise right shift operation (`>>`) is a binary operation that takes two numbers, a value and a shift amount, and returns a new number by shifting the bits of the value to the right by the specified shift amount. The vacated bits are filled with zeros or sign bit depending on the input value being signed or unsigned.
