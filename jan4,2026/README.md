# Day 04 – Daily Progress ✅

## 📌 Problem Solved
**Sum of Numbers With Exactly Four Divisors**

Given an integer array, return the sum of divisors of the numbers that have
**exactly four divisors**.  
If no such number exists, return `0`.

---

## 🧠 Approach
- A number has exactly **four divisors** if:
  1. It is the product of **two distinct prime numbers** → `p × q`
     - Divisors: `1, p, q, p×q`
  2. OR it is a **cube of a prime number** → `p³`
     - Divisors: `1, p, p², p³`

- For each number:
  - Perform prime factorization
  - Count distinct prime factors
  - Validate one of the above cases
  - Add the sum of its four divisors

---

## ⏱️ Time Complexity
- **O(n √m)**  
  where `n` = size of array, `m` = value of number

## 💾 Space Complexity
- **O(1)** (constant extra space)

---

## 🎯 Key Learnings
- Prime factorization logic
- Mathematical properties of divisors
- Edge case handling
- Optimized divisor counting

---

## ✅ Status
✔ Solved and implemented in C++
