# Day 05 – Daily Progress ✅

## 📌 Problem Solved
**Maximize Matrix Sum Using Adjacent Sign Flips**

You are given an `n x n` matrix.  
You can flip the sign of any **two adjacent elements** (sharing a border) any
number of times.

The goal is to **maximize the sum of all elements** in the matrix.

---

## 🧠 Key Observation
- Flipping two adjacent elements preserves the **parity of negative numbers**.
- We can freely move negative signs across the matrix.
- Therefore:
  - If the count of negative elements is **even**, all values can be made positive.
  - If the count is **odd**, exactly **one element must remain negative**.

To maximize the sum in the odd case, keep the element with the **smallest absolute value** negative.

---

## 🧮 Strategy
1. Take the **absolute value** of all elements and add them to the total sum.
2. Count how many elements are negative.
3. Track the **minimum absolute value** in the matrix.
4. If negatives are odd → subtract `2 × minAbs` from total sum.

---

## ⏱️ Time Complexity
- **O(n²)**

## 💾 Space Complexity
- **O(1)** (constant extra space)

---

## 🎯 Key Learnings
- Mathematical optimization using parity
- Matrix traversal
- Greedy decision-making
- Avoiding unnecessary simulations

---

## ✅ Status
✔ Solved and implemented in C++
