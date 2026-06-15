<div align="center">

# 🏦 Basic Bank System

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Concepts](https://img.shields.io/badge/Concepts-Structs%20%7C%20Nested%20Structs%20%7C%20Pointers-informational?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge)

*A console-based bank account system written in C.*

</div>

---

## 📌 Overview

Basic Bank System is a terminal program that simulates a single bank account. You can create an account, deposit and withdraw funds, check your balance, and view a full transaction history with dates — all through a simple numbered menu.

---

## ✨ Features

| # | Feature | Description |
|---|---|---|
| 1 | **Create Account** | Set up an account with an owner name and zero balance |
| 2 | **Deposit** | Add funds and log the transaction with a date |
| 3 | **Withdraw** | Remove funds (blocked if balance is insufficient) and log the transaction |
| 4 | **Show Balance** | Display the owner name and current balance |
| 5 | **Transaction History** | List all deposits and withdrawals with amounts and dates |

---

## 🧠 Concepts Used

- `struct` — nested structs (`Date` inside `Transaction` inside `Account`)
- `fgets` / `strcspn` — safe string input and newline stripping
- `strcpy` / `strcmp` — string copying and comparison for transaction types
- Pointer parameters — all functions operate on `Account *account`
- Fixed-size transaction array — stores up to 50 transactions per account

---

## 🖥️ Menu Preview

```
=== Menu ===
1. Create account
2. Deposit
3. Withdraw
4. Show balance
5. Show transaction history
6. Exit
```

---

## 🔧 How to Compile & Run

**Requirements:** GCC or any C99-compatible compiler

```bash
# Compile
gcc BasicBankSystem.c -o BasicBankSystem

# Run (Linux / macOS)
./BasicBankSystem

# Run (Windows)
BasicBankSystem.exe
```

---

## ⚠️ Limitations

- Only **one account** can be created per run
- Maximum **50 transactions** can be stored
- Data is **not saved** between runs (no file I/O yet)

---

## 📜 License

Released under the [MIT License](../LICENSE).
