# OBJECT ORIENTED PROGRAMMING

- The Object Oriented Programming means building/implementing real-world entities(`say organization or a thing or a box or a container`) like inheritance, polymorphism in programming.
- It helps bind our data and functions that work on that data together so as to restrict other parts of the code to directly access them.

### Building blocks of OOPs:
1. Class
2. Object
3. Encapsulation
4. Abstraction
5. Polymorphism
6. Inheritance
7. Dynamic Binding
8. Message Passing

## Characteristics of Object Oriented Programming

![characteristics](https://media.geeksforgeeks.org/wp-content/uploads/OOPs-Concepts.jpg)

1. Class:
- A Class is user defined data type which holds it's own data members(`variables`) and member functions(`functions`) that can be accessed by creating an instance of that class. 
- Classes are used to define the behavior and properties of a category of things.  E.g. A "Car" class might dictate that all cars be defined by their make, model, year, and mileage. But you can't provide specifics about a particular car (for example, that 1978 Chevy Impala with 205,000 miles on it that your uncle Mickey drives) until you create an "instance" of a Car. It's the instance that captures the detailed information about one particular car.

2. Object:
- Objects are an encapsulation of variables and functions into a single entity. Objects get their variables and functions from classes. Classes are the templates to create object. And hence objects are instance of a Class.
- When a class is defined no memory is assigned but when object is created then memory is assigned.


#### Constructor
- Constructor is an `Initialization Function`. It is a member function of a class, whose name is same as that of the class.
- Invoked at the time of object creation.
- Does not have a return type or a return value.
- It initializes the variables/values.

##### Why use Constructor?
- The only reason I find constructor is used instead of a normal initialization function is that it stops different people from using different different function names and avoid ambiguity and it is much easier to use constructor which is instantiated as an object is created. It is helpful when working with large programs.
