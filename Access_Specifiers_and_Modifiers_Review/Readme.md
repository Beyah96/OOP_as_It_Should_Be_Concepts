# README: C++ Class Inheritance and Access Control

## Overview

This C++ program demonstrates the concept of inheritance and access control using three classes: `clsA`, `clsB`, and `clsC`. The code showcases the use of **public**, **protected**, and **private** member variables and functions across different levels of class inheritance. The program uses a simple hierarchy to illustrate how members of a class are inherited and how their access is controlled by the inheritance type.

## Code Structure

### Class `clsA`
The base class `clsA` contains:
- **Private Members**: 
  - `var1`: A `short` type variable that is **private** and cannot be accessed outside the class.
  - `Function1()`: A private function that prints a message indicating it is from class `A`. It is **not accessible** outside `clsA`.
  
- **Protected Members**:
  - `var2`: A `short` type variable that is **protected**. It can be accessed by derived classes, but not outside the class hierarchy.
  - `Function2()`: A protected function that prints a message indicating it is from class `A`. This can be called by classes that inherit from `clsA`.

- **Public Members**:
  - `var3`: A `short` type variable that is **public**, meaning it can be accessed directly from outside the class.
  - `Function3()`: A public function that prints a message indicating it is from class `A`. This function is **accessible** from any class.

### Class `clsB` (Derived from `clsA` using Protected Inheritance)
The class `clsB` inherits from `clsA` using **protected inheritance**, meaning the **public** and **protected** members of `clsA` become **protected** in `clsB`, and **private** members remain inaccessible.

- **Public Members**:
  - `varB`: A `int` type variable that is **public** in `clsB`.
  - `FunctionB()`: A public function in `clsB` that calls `Function2()` and `Function3()` from `clsA` (demonstrating access to inherited members). It also prints the sum of `var2`, `var3`, and `varB`.

### Class `clsC` (Derived from `clsB` using Public Inheritance)
The class `clsC` inherits from `clsB` using **public inheritance**, meaning the **public** and **protected** members of `clsB` remain **public** and **protected** in `clsC`.

- **Public Members**:
  - `varC`: An `int` type variable that is **public** in `clsC`.
  - `FunctionC()`: A public function in `clsC` that calls `Function3()` from `clsB`.

### Main Function
In the `main()` function:
- An object `B` of type `clsA` is created, and the public method `Function3()` is called. This demonstrates that public members of `clsA` can be accessed directly in the `main()` function.

```cpp
clsA B;
B.Function3();
