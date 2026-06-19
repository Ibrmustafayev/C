<div align="center">

# 🔗 Linked List Series

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Concepts](https://img.shields.io/badge/Concepts-Linked%20List%20%7C%20Pointers%20%7C%20Dynamic%20Memory-informational?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge)

*Three progressive C programs exploring self-referencing structs, from a basic linked list to stack & queue implementations.*

</div>

---

## 📌 Overview

This is a three-part series that builds up linked list knowledge in C step by step. Each program reuses the same self-referencing `Node` struct but applies it to a different level of complexity — starting with a simple append-only list and ending with a linked-list-based stack and queue.

---

## 🚀 Programs

### 1️⃣ [Self-Referencing Structs](SelfReferencingStructs.c)
The foundation. Builds a singly linked list by appending user-entered numbers, prints it, and frees all allocated memory.

| Detail | Info |
|---|---|
| **Concepts** | Self-referencing structs, `malloc`/`free` |
| **Difficulty** | ⭐ |

```bash
gcc SelfReferencingStructs.c -o SelfReferencingStructs && ./SelfReferencingStructs
```

---

### 2️⃣ [Linked List Operations](LinkedListOperations.c)
Expands the basic list into a full CRUD-style structure with a menu: append, insert at index, delete at index, search by value, print, and get length.

| Detail | Info |
|---|---|
| **Concepts** | Index-based insert/delete, linear search, double pointers |
| **Difficulty** | ⭐⭐ |

```bash
gcc LinkedListOperations.c -o LinkedListOperations && ./LinkedListOperations
```

---

### 3️⃣ [Stack & Queue (Linked List Based)](StackQueue.c)
Applies the linked list to two classic data structures: a LIFO stack (push/pop) and a FIFO queue (enqueue/dequeue), both implemented with `Node` pointers instead of arrays.

| Detail | Info |
|---|---|
| **Concepts** | LIFO / FIFO logic, `top`/`front`/`rear` pointer management |
| **Difficulty** | ⭐⭐⭐ |

```bash
gcc StackQueue.c -o StackQueue && ./StackQueue
```

---

## 🧠 Concepts Used (Across the Series)

- Self-referencing `struct` — `Node` containing a pointer to itself
- Dynamic memory allocation — `malloc` and `free`
- Double pointers — `Node **head` / `**top` / `**front` to modify pointers in place
- Linked list traversal — single-direction iteration with a `current` pointer
- Stack (LIFO) and Queue (FIFO) logic built without arrays

---

## 🔧 How to Compile & Run

**Requirements:** GCC or any C99-compatible compiler

```bash
# Compile
gcc filename.c -o output

# Run (Linux / macOS)
./output

# Run (Windows)
output.exe
```

---

## 📁 Structure

```
LinkedListSeries/
├── SelfReferencingStructs.c   # Basic linked list (append, print, free)
├── LinkedListOperations.c     # Full CRUD linked list with menu
├── StackQueue.c                # Stack & queue via linked list
└── README.md
```

---

## 📜 License

Released under the [MIT License](../LICENSE).
