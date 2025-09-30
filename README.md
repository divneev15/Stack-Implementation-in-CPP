
# STACK IMPLEMENTATION USING ARRAY

**Aim:**
To study and implement **Stack** using arrays with the following menu options:

* **Push**
* **Pop**
* **Display**
* **Exit**

**Tools Used:**

* VS Code or any Online C++ Compiler

---

## Theory

A **Stack** is a linear data structure in which elements are inserted and deleted only from one end, known as the **Top**.
It follows the **LIFO (Last In First Out)** principle:

* The last inserted element is the first one to be removed.

---

### Stack Operations

1. **Push** → Insert an element at the top.
2. **Pop** → Remove an element from the top.
3. **Peek/Top** → View the top element without deleting it.
4. **Display** → Print all stack elements from bottom to top.

---

### Representation of a Stack

```
   TOP → [40]   <-- Last inserted (first out)
          [30]
          [20]
   BASE → [10]   <-- First inserted (last out)
```
<img width="1386" height="688" alt="image" src="https://github.com/user-attachments/assets/83d5769b-9a30-4f07-a82a-9050cf7b55e8" />

---

### Key Points

* If `top == size - 1` → **Stack Overflow** (stack is full).
* If `top == -1` → **Stack Underflow** (stack is empty).

---

## General Syntax of a Stack in C++

```cpp
class Stack {
    int arr[SIZE];  // Array for storage
    int top;        // Pointer to top element
public:
    Stack();        // Constructor
    void push(int); // Insert element
    int pop();      // Delete element
    int peek();     // Show top element
    void disp();    // Display all elements
};
```

---

## Algorithms

### 1. Push (Insert)

1. Check if `top == size - 1`.

   * If true → print **Stack Overflow**.
2. Otherwise, increase `top` by 1.
3. Place the new element at `arr[top]`.
4. Print confirmation message.

---

### 2. Pop (Delete)

1. Check if `top == -1`.

   * If true → print **Stack Underflow**.
2. Otherwise, take the value at `arr[top]`.
3. Decrease `top` by 1.
4. Print the deleted value.

---

### 3. Peek (View Top Element)

1. Check if `top == -1`.

   * If true → print **Stack Underflow**.
2. Otherwise, return `arr[top]` as the top element.

---

### 4. Display

1. Check if stack is empty (`top == -1`).

   * If true → print **Stack is Empty**.
2. Otherwise, print elements starting from `arr[0]` up to `arr[top]`.

---

## Applications of Stack

1. **Function Calls:** The system uses call stack during program execution.
2. **Expression Evaluation:** Used in compilers for evaluating postfix/prefix expressions.
3. **Undo/Redo Operations:** Text editors maintain action history using stacks.
4. **Parentheses Matching:** Validating balanced brackets in expressions.
5. **Backtracking:** Used in recursion, puzzle-solving, and pathfinding algorithms.

---

## Advantages

* Easy to implement and efficient for LIFO-based operations.
* Push and Pop operations are performed in **O(1)** time.
* Plays a key role in recursion, temporary data storage, and history management.

---

## Conclusion

The **stack data structure** provides an efficient way to manage data where the **last inserted element is accessed first**. Through the implementation of **push, pop, peek, and display** operations, we gain practical knowledge of how stacks function internally using arrays. Although simple, stacks are extremely powerful and form the foundation for solving complex problems in **compilers, operating systems, recursion, and memory management**.

