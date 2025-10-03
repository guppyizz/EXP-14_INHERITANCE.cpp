# 💻 C++ EXPERIMENTS

A curated collection of C++ programs for practice and learning, designed with simplicity and clarity in mind.

---

## 👨‍🎓 Student Information

- **Name:** Updesh Arora  
- **PRN:** 24070123124  
- **Branch:** ENTC  
- **Class:** B-3

---
# EXP-14_INHERITANCE.cpp

## **Software Required:**
- Visual Studio or any IDE supporting C++

## **Theory:**

Inheritance is one of the core principles of Object-Oriented Programming (OOP). It allows one class to acquire the properties and behaviors (fields and methods) of another class. This promotes code reuse, modularity, and the creation of hierarchies in programs.

In C++, inheritance comes in different types, each with unique characteristics and use cases:

### **Types of Inheritance in C++:**

1. **Single Inheritance**  
   In single inheritance, a class inherits from only one parent class. The derived class inherits all the properties and methods from the base class.

2. **Multiple Inheritance**  
   In multiple inheritance, a class can inherit from more than one class, thus inheriting attributes and behaviors from multiple parent classes.

3. **Multilevel Inheritance**  
   In this type, a class inherits from another derived class, creating a chain of inheritance.

4. **Hierarchical Inheritance**  
   More than one subclass is derived from a single base class. Multiple subclasses share the properties of the same parent class.

### **Advantages of Inheritance in C++:**

+ **Code Reusability**: Derived classes can directly access and reuse methods and fields from the base class, eliminating code duplication.
+ **Abstraction**: Inheritance allows the creation of abstract classes, which provide a template for other classes to implement.
+ **Class Hierarchy**: Inheritance helps in structuring programs that model real-world relationships, such as "a Dog is an Animal".
+ **Polymorphism**: Inheritance supports polymorphism, both compile-time (through function overloading) and runtime (via virtual functions).

## **Implementation:**

The following inheritance types are demonstrated in the code implementations:

- **Single Inheritance**
- **Multiple Inheritance**
- **Multilevel Inheritance**
- **Hierarchical Inheritance**
- **Access Specifier in Inheritance (Protected)**

## **Algorithms:**

### **Algorithm: Single Inheritance (Animal and Dog)**

1. **Start**
2. Define a base class `Animal`:
   - Public member function `eat()` displays `"This animal eats food."`
3. Define a derived class `Dog` that inherits `Animal`:
   - Public member function `bark()` displays `"The dog barks."`
4. In `main()`:
   - Create object `myDog` of class `Dog`.
   - Call `myDog.eat()` to invoke the inherited method.
   - Call `myDog.bark()` to invoke the method in `Dog`.
5. **End**

### **Algorithm: Multiple Inheritance (Car inherits Vehicle and Specs)**

1. **Start**
2. Define base class `Vehicle`:
   - Public member variable `company` initialized as `"Toyota"`.
   - Public member function `type()` displays `"Supra"`.
3. Define base class `Specs`:
   - Public member variable `mileage` initialized as `"12 kmpl"`.
   - Public member function `colour()` displays `"Red"`.
4. Define derived class `Car` that inherits `Vehicle` and `Specs`:
   - Public member variable `seater` initialized as `"2 seater"`.
5. In `main()`:
   - Create object `f2` of class `Car`.
   - Call `f2.colour()` from `Specs`.
   - Display `f2.company` from `Vehicle`.
   - Call `f2.type()` from `Vehicle`.
   - Display `f2.seater` and `f2.mileage` from `Car` and `Specs`.
6. **End**

### **Algorithm: Multilevel Inheritance (Library inherits Title, Title inherits Book)**

1. **Start**
2. Define base class `Book`:
   - Public member variable `genre` initialized as `"Science Fiction"`.
   - Public member function `type()` displays `"Novel"`.
3. Define derived class `Title` that inherits `Book`:
   - Public member variable `title` initialized as `"Dune"`.
4. Define derived class `Library` that inherits `Title`:
   - Public member variable `name` initialized as `"Central Library"`.
5. In `main()`:
   - Create object `b3` of class `Library`.
   - Call `b3.type()` from `Book`.
   - Display `b3.genre` and `b3.title` from `Book` and `Title`.
   - Display `b3.name` from `Library`.
6. **End**

### **Algorithm: Hierarchical Inheritance (Fruit → Apple/Banana/Cherry)**

1. **Start**
2. Define base class `Fruit`:
   - Public string array `type[3]` containing `"Apple"`, `"Banana"`, `"Cherry"`.
   - Public member function `supplier()` displays `"Fresh Farms Ltd."`.
3. Define derived classes `Apple`, `Banana`, `Cherry` that inherit `Fruit`:
   - `Apple` has `color = "Red"`.
   - `Banana` has `color = "Yellow"`.
   - `Cherry` has `color = "Dark Red"`.
4. In `main()`:
   - Create object `f1` of class `Apple`, call `f1.supplier()`, and print `f1.type[0]` and `f1.color`.
   - Create object `f2` of class `Banana`, call `f2.supplier()`, and print `f2.type[1]` and `f2.color`.
   - Create object `f3` of class `Cherry`, call `f3.supplier()`, and print `f3.type[2]` and `f3.color`.
5. **End**

### **Algorithm: Accessing Protected Members in Inheritance**

1. **Start**
2. Define base class `Parent`:
   - `protected` integer `protectedValue`.
   - Constructor initializes `protectedValue = 42`.
3. Define derived class `Child` that inherits `Parent`:
   - Public member function `showProtected()` displays `protectedValue`.
4. In `main()`:
   - Create object `obj` of class `Child`.
   - Call `obj.showProtected()` to print the inherited `protectedValue`.
5. **End**

## **Conclusion:**
The implementation demonstrates the concept of **Inheritance**, a fundamental feature of Object-Oriented Programming in C++. Through various inheritance types, such as **Single**, **Multiple**, **Multilevel**, and **Hierarchical**, we can understand how to structure programs in a modular and reusable way.

---

