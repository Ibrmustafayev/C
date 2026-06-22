<div align="center">

# 📂 File I/O

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Concepts](https://img.shields.io/badge/Concepts-File%20I%2FO%20%7C%20Structs%20%7C%20fprintf%2Ffscanf-informational?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge)

*Two progressive C programs exploring file reading and writing — from raw integers to struct-based records.*

</div>

---

## 📌 Overview

This is a two-part series on file I/O in C. The first program covers the basics: writing an integer array to a text file and reading it back. The second applies the same pattern to structs, saving and loading student records with name, age, and GPA.

---

## 🚀 Programs

### 1️⃣ [File Basics](file_basics.c)
Takes an integer array from the user, saves it to `numbers.txt`, reads it back, and prints the values along with their sum.

| Detail | Info |
|---|---|
| **Concepts** | `fopen`, `fclose`, `fprintf`, `fscanf`, file modes (`"w"`, `"r"`) |
| **Difficulty** | ⭐ |

```bash
gcc file_basics.c -o file_basics && ./file_basics
```

---

### 2️⃣ [Structs in Files](structs_in_files.c)
Takes multiple student records (name, age, GPA), saves them to `students.txt` as formatted text, and reads them back into a struct array.

| Detail | Info |
|---|---|
| **Concepts** | Writing and reading structs via `fprintf`/`fscanf`, multi-field text records |
| **Difficulty** | ⭐⭐ |

```bash
gcc structs_in_files.c -o structs_in_files && ./structs_in_files
```

---

## 🧠 Concepts Used (Across the Series)

- `FILE *fp` — file pointer declaration and usage
- `fopen` / `fclose` — opening and closing files safely
- `fprintf` — writing formatted data to a file
- `fscanf` — reading formatted data from a file
- NULL check — error handling when a file cannot be opened
- Text-based persistence — storing and recovering runtime data across runs

---

## 🖥️ Example Output

**File Basics:**
```
Enter the size of the array: 3
Enter 3 numbers: 10 20 30
Saved to numbers.txt

Reading back from the file....
Numbers: 10 20 30
Sum: 60
```

**Structs in Files:**
```
How many students? 2

Name: Alice  Age: 20  GPA: 3.8
Name: Bob    Age: 22  GPA: 3.5
Saved to students.txt

Loaded students:
  1. Alice, 20, 3.80
  2. Bob, 22, 3.50
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
FileIO/
├── file_basics.c       # Save and read an integer array to/from a text file
├── structs_in_files.c  # Save and read student structs to/from a text file
└── README.md
```

---

## 📜 License

Released under the [MIT License](../LICENSE).
