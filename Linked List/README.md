<div align="center">

# 🔗 Self-Referencing Structs

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Concepts](https://img.shields.io/badge/Concepts-Linked%20List%20%7C%20Pointers%20%7C%20Dynamic%20Memory-informational?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge)

*A console-based linked list implementation in C using self-referencing structs.*

</div>

---

## 📌 Overview

Self-Referencing Structs demonstrates the fundamentals of a singly linked list in C. The user enters a sequence of numbers, which are stored as dynamically allocated nodes. The program then prints the list in order and frees all allocated memory.

---

## ✨ Features

| # | Feature | Description |
|---|---|---|
| 1 | **Build List** | Accepts n numbers from the user and appends each as a new node |
| 2 | **Print List** | Traverses and prints the list in `1 -> 2 -> 3 -> NULL` format |
| 3 | **Free Memory** | Walks the list and frees every node to prevent memory leaks |

---

## 🧠 Concepts Used

- Self-referencing `struct` — `Node` contains a `struct Node *next` pointer
- Dynamic memory allocation — `malloc` and `free` via `stdlib.h`
- Double pointer — `Node **head` passed to `append` to modify the head pointer
- Linked list traversal — iterating with a `current` pointer until `NULL`
- Memory safety — `freeList` cleans up all heap-allocated nodes

---

## 🖥️ Example Output

```
How many numbers? : 4
Enter numbers: 10 20 30 40

List: 10 -> 20 -> 30 -> 40 -> NULL
```

---

## 🔧 How to Compile & Run

**Requirements:** GCC or any C99-compatible compiler

```bash
# Compile
gcc SelfReferencingStructs.c -o SelfReferencingStructs

# Run (Linux / macOS)
./SelfReferencingStructs

# Run (Windows)
SelfReferencingStructs.exe
```

---

## ⚠️ Limitations

- Supports **append only** — no insert, delete, or reverse operations yet
- **No bounds checking** on the number of nodes

---

## 📜 License

Released under the [MIT License](../LICENSE).
