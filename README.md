# CPP01
# README: C++ Exercises Explanation

This README provides an overview of the theory and concepts covered in the six exercises that you will implement in C++. Each exercise introduces fundamental programming concepts, including classes, memory management, pointers, references, object-oriented programming (OOP), and string manipulation. Here's a breakdown of the exercises and what they teach:

---

## **Exercise 00: BraiiiiiiinnnzzzZ**

### **Concepts Covered**:
- **Classes and Objects**: You will implement a `Zombie` class with member functions to interact with the class’s attributes and manipulate them.
- **Dynamic Memory Allocation**: The exercise emphasizes deciding when to allocate memory on the stack vs. the heap. This will require you to understand the difference between local variables and dynamically allocated memory.
- **Destructor and Memory Management**: You will implement a destructor to clean up resources when the zombie is no longer needed. Understanding the importance of destructors in managing dynamically allocated memory is key here.

### **Explanation**:
The task is to create a `Zombie` class that can announce itself, manage its name, and be dynamically created or allocated on the stack. You will use two functions (`newZombie` and `randomChump`) to manage zombie creation and memory allocation.

---

## **Exercise 01: Moar Brainz!**

### **Concepts Covered**:
- **Dynamic Memory Allocation (Heap vs. Stack)**: You will allocate multiple `Zombie` objects on the heap and learn how to manage memory manually by using `new` and `delete`.
- **Arrays of Objects**: The exercise teaches how to allocate an array of objects (`Zombie` objects) in a single allocation.
- **Memory Leaks and Cleanup**: Properly deallocating memory to prevent memory leaks is a major focus.

### **Explanation**:
The task is to create a function that allocates a horde of `Zombie` objects, giving each zombie a name. You'll need to manage memory for the entire horde and deallocate it when done, ensuring no memory leaks.

---

## **Exercise 02: HI THIS IS BRAIN**

### **Concepts Covered**:
- **Pointers and References**: This exercise clarifies the difference between pointers and references. You will see how both can be used to access memory locations and manipulate data.
- **Memory Addresses**: Understanding the relationship between variables, pointers, and references will help you understand how memory is managed in C++.

### **Explanation**:
You will create a program that works with a string variable and a pointer/reference to it. The program will print the memory addresses of the string variable, pointer, and reference, along with the values they hold. This reinforces concepts around memory management and dereferencing.

---

## **Exercise 03: Unnecessary Violence**

### **Concepts Covered**:
- **Class Design and Constructors**: You will design a `Weapon` class and use it in two other classes (`HumanA` and `HumanB`). The classes will help you learn about constructors and member functions.
- **Member Functions**: You will learn to create getter and setter functions for private attributes.
- **Composition and Object Relationships**: `HumanA` and `HumanB` classes will illustrate the concept of composition (one class using another class’s instance). You'll observe how to pass objects as arguments and how object references behave.

### **Explanation**:
This exercise introduces polymorphism through the two human classes. Both classes use the `Weapon` class, but `HumanA` directly receives a weapon via its constructor, while `HumanB` does so via a setter. The task demonstrates object composition, constructor behavior, and memory management for complex objects.

---

## **Exercise 04: Sed is for Losers**

### **Concepts Covered**:
- **File Handling**: This exercise introduces file I/O in C++ and demonstrates how to manipulate files without using the C library functions.
- **String Manipulation**: You’ll replace parts of a string using member functions of `std::string` (without using `std::string::replace`), which teaches you how to work with substrings, string searches, and string concatenation.
- **Error Handling**: You’ll need to handle various kinds of errors, including file errors, incorrect input, or missing files.

### **Explanation**:
This exercise focuses on replacing all occurrences of a substring in a file with another string. You will write a C++ program that reads a file, performs string replacements, and outputs the result to a new file. It requires careful handling of I/O operations and string manipulation.

---

## **Exercise 05: Harl 2.0**

### **Concepts Covered**:
- **Pointers to Member Functions**: The exercise introduces a key concept in C++—using pointers to member functions. You will learn how to dynamically call class member functions through pointers.
- **Function Dispatching**: This exercise focuses on dispatching different functions based on input, without using multiple `if` statements.
- **String and Console Output**: You will manage string-based conditions and print outputs accordingly.

### **Explanation**:
You will create a `Harl` class with multiple complaint levels (e.g., DEBUG, INFO, WARNING, ERROR). Depending on the level passed to the class's `complain` function, the appropriate message is displayed. This exercise encourages you to use pointers to member functions to avoid a long series of conditionals and improves your understanding of function pointers.

---

## **Conclusion**

These exercises cover a wide range of C++ concepts, including memory management (stack vs. heap), object-oriented programming (classes, constructors, destructors), file manipulation, string handling, and advanced topics like function pointers. Completing these exercises will deepen your understanding of core C++ features and help you develop efficient and maintainable programs.
