<div align="center">

# 🔁 Recursion Series

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Concepts](https://img.shields.io/badge/Concepts-Recursion%20%7C%20Backtracking-informational?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge)

*Three progressive C programs exploring recursion, from basic math problems to recursive backtracking.*

</div>

---

## 📌 Overview

This is a three-part series that builds up recursion knowledge in C step by step. It starts with classic standalone recursive problems, moves into recursion over arrays and strings, and ends with recursive backtracking to generate all subsets of a set.

---

## 🚀 Programs

### 1️⃣ [Recursion Basics](RecursionBasics.c)
Four classic recursive problems in one program: factorial, Fibonacci, digit sum, and reverse-printing a number.

| Detail | Info |
|---|---|
| **Concepts** | Base cases, single recursive calls, double recursion (Fibonacci) |
| **Difficulty** | ⭐ |

```bash
gcc RecursionBasics.c -o RecursionBasics && ./RecursionBasics
```

---

### 2️⃣ [Recursion on Arrays & Strings](RecursionArraysStrings.c)
Applies recursion to arrays and strings: summing and finding the max of an array, checking if a word is a palindrome, and reversing a word — all without loops.

| Detail | Info |
|---|---|
| **Concepts** | Recursion on array indices, two-pointer recursion (`start`/`end`), string traversal |
| **Difficulty** | ⭐⭐ |

```bash
gcc RecursionArraysStrings.c -o RecursionArraysStrings && ./RecursionArraysStrings
```

---

### 3️⃣ [Recursive Backtracking](RecursiveBacktracking.c)
Generates and prints every possible subset of a user-entered array using the include/exclude backtracking pattern.

| Detail | Info |
|---|---|
| **Concepts** | Backtracking, include/exclude recursion tree, power set generation |
| **Difficulty** | ⭐⭐⭐ |

```bash
gcc RecursiveBacktracking.c -o RecursiveBacktracking && ./RecursiveBacktracking
```

---

## 🧠 Concepts Used (Across the Series)

- Base cases and recursive cases
- Recursion over arrays via shrinking size/index parameters
- Two-pointer recursion for strings (palindrome check, reverse)
- Backtracking via the include/exclude pattern to enumerate all subsets
- Variable-length arrays for runtime-sized input

---

## 🖥️ Example Output

**Recursion Basics** (n = 5):
```
Factorial: 120
Fibonacci: 5
Sum of digits: 5
Reverse print: 5 4 3 2 1
```

**Recursive Backtracking** (arr = 1 2 3):
```
{}
{3}
{2}
{2, 3}
{1}
{1, 3}
{1, 2}
{1, 2, 3}
```

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
RecursionSeries/
├── RecursionBasics.c            # Factorial, Fibonacci, digit sum, reverse print
├── RecursionArraysStrings.c     # Array sum/max, palindrome check, word reverse
├── RecursiveBacktracking.c      # Subset generation via backtracking
└── README.md
```

---

## 📜 License

Released under the [MIT License](../LICENSE).
