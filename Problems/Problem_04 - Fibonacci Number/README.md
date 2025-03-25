### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_04%20-%20Fibonacci%20Number/
        ├── README.md        # Contains problem statement, explanation, and examples
        ├── solution.cpp     # C++ solution code
        └── notes.md         # Additional insights or notes (optional)
```

---

# Problem 04 - Fibonacci Number

**Difficulty:** Easy  
**Platform:** LeetCode

## Problem Statement

The Fibonacci numbers, commonly denoted `F(n)`, form a sequence such that each number is the sum of the two preceding ones, starting from 0 and 1. That is:

```
F(0) = 0, F(1) = 1  
F(n) = F(n - 1) + F(n - 2), for n > 1.
```

Given an integer `n`, calculate `F(n)`.

## Examples

**Example 1:**  
```
Input: n = 2  
Output: 1  
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
```

**Example 2:**  
```
Input: n = 3  
Output: 2  
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
```

**Example 3:**  
```
Input: n = 4  
Output: 3  
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
```

## Explanation

This problem requires calculating the `n`th Fibonacci number using recursion. Although the recursive approach is straightforward, it's important to note that it may not be efficient for large `n` due to repeated computations. In practice, techniques such as memoization or iterative solutions are used to optimize performance.

👉 **Check out the C++ solution in `solution.cpp`.**
