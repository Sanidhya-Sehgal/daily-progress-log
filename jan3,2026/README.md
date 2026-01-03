# Day 03 – Daily Progress ✅

## 📌 Problem Solved
**Paint Grid with Three Colors (n x 3 grid)**

You are given a grid of size `n x 3`. Each cell must be painted using one of the
three colors:
- Red
- Yellow
- Green

### Constraints
- No two adjacent cells (vertical or horizontal) can have the same color.
- Answer must be computed modulo **10⁹ + 7**.

---

## 🧠 Approach Used
- **Dynamic Programming with Memoization**
- Each row depends on the color configuration of the previous row.
- We track:
  - Current row index
  - Colors used in the previous row (three columns)

### State Definition
`dp[row][prev1][prev2][prev3]`  
→ Number of ways to paint from `row` to `n-1` given previous row colors.

---

## ⏱️ Time Complexity
- **O(n × 3³ × 3³)**  
(Small constant due to fixed 3 columns)

## 💾 Space Complexity
- **O(n × 4 × 4 × 4)** for DP table

---

## 🎯 Key Learnings
- Multi-dimensional dynamic programming
- Handling state transitions carefully
- Applying modulo arithmetic
- Grid coloring problems

---

## ✅ Status
✔ Solved and implemented in C++
