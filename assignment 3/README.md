#1 Explain the difference between a normal variable and a pointer
- Normal Variable  
  - Stores a value directly (e.g., int x = 10; → x holds 10).  
  - Accessed by its name, compiler maps it to a memory location.  
  - Reading/modifying: x = 20; changes the value stored in that memory cell.

- Pointer  
  - Stores a memory address of another variable (e.g., int *p = &x; → p holds the address of x).  
  - Accessed indirectly: you use *p to reach the value at that address.  
  - Reading/modifying: *p = 30; changes the value of x through its address.
 Key difference: Variable = value, Pointer = address of value.


#2.using suitable examples,explainhow variable declaration and definition differs from pointer declaration and definition 
- Variable Declaration/Definition  
  `c
  int a;       // declaration
  int b = 5;   // definition with initialization
  `
  - a reserves memory for an integer.  
  - b reserves memory and stores 5.

- Pointer Declaration/Definition  
  `c
  int *p;        // declaration: p is a pointer to int
  int x = 10;
  p = &x;        // definition: p stores address of x
  `
  - * indicates pointer type.  
  - & gives the address of a variable.

Operators:  
- & → "address of"  
- * → "dereference" (access value at address)

---

#3.Explain the meaning of deferencing a pointer
- Meaning: Accessing the value stored at the memory address a pointer holds.  
- Example:
  `c
  int x = 10;
  int *p = &x;
  printf("%d", *p);   // prints 10
  *p = 20;            // modifies x through pointer
  printf("%d", x);    // prints 20
  `
  Dereferencing bridges the gap between address and actual value.



#4. Describe scenarios or use Where Pointers Are Preferred over normal variables
- Dynamic Memory Allocation  
  - Using free() for flexible memory management.  
  - Example: building linked lists or trees.

- Function Arguments (Efficiency)  
  - Passing large structures/arrays by reference avoids copying overhead.  
  - Example: modifying arrays inside functions.


#5.Explain the Limitations and Risks associated with using Pointers compared to variables
- Dangling Pointers: Accessing freed memory hence undefined behavior.  
- Memory Leaks: Forgetting to free() allocated memory.  
- Complexity: Harder to debug than normal variables.  
- Security Risks: Buffer overflows, invalid memory access.


#6. Using suitable examples compare cCall by Value and Call by Reference
- Call by Value  
  - Function gets a copy of the variable.  
  - Changes inside function do not affect original.  
  `c
  void func(int x) { x = 10; }
  `
- Call by Reference  
  - Function gets the address of the variable.  
  - Changes inside function affect original.  
  `c
  void func(int x) { x = 10; }
  `

---

#7. Discuss Practical Scenarios where:
(a) Call by Value Preferred  
  - When you want to protect original data.  
  - Example: mathematical computations where inputs must remain unchanged.
(b)Call by Reference Preferred  
  - When you need to modify caller’s data.  
  - Example: swapping two variables, updating arrays, or passing large data structures.
