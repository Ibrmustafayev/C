<div align="center">

# 🗂️ Header Files & Multi-File Structure

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Concepts](https://img.shields.io/badge/Concepts-Header%20Files%20%7C%20Multi--File%20%7C%20Compilation-informational?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge)

*A C project demonstrating how to split code across multiple files using a header.*

</div>

---

## 📌 Overview

This project refactors the student records program into a proper multi-file structure. The struct definition and function declarations live in a header file (`student.h`), the logic lives in a source file (`student.c`), and the entry point lives in `main.c`. This is how real-world C projects are organized.

---

## ✨ Structure Breakdown

| File | Role |
|---|---|
| `student.h` | Struct definition + function declarations (interface) |
| `student.c` | Function implementations — `saveToFile`, `readFromFile` |
| `main.c` | Entry point — user input, calls functions from `student.c` |

---

## 🧠 Concepts Used

- Header guards — `#ifndef` / `#define` / `#endif` to prevent double inclusion
- `#include "student.h"` — including a local header vs. a system header
- Separation of interface and implementation across `.h` and `.c` files
- Multi-file compilation — linking multiple `.c` files into one executable
- `FILE *fp`, `fprintf`, `fscanf` — file I/O for persistent struct storage

---

## 🔧 How to Compile & Run

**Requirements:** GCC or any C99-compatible compiler

```bash
# Compile all files together
gcc main.c student.c -o student_app

# Run (Linux / macOS)
./student_app

# Run (Windows)
student_app.exe
```

---

## 🖥️ Example Output

```
How many students? 2

Name: Alice
Age: 20
GPA: 3.8

Name: Bob
Age: 22
GPA: 3.5

Saved to students.txt

Loaded students:
  1. Alice, 20, 3.80
  2. Bob, 22, 3.50
```

---

## 📁 Structure

```
HeaderFiles/
├── main.c       # Entry point
├── student.h    # Struct definition and function declarations
├── student.c    # Function implementations
└── README.md
```

---

## 📜 License

Released under the [MIT License](../LICENSE).
