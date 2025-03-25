### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_08%20-%20Rotate%20Array/
        ├── README.md        # 📄 Problem statement, explanation, and examples
        ├── solution.cpp     # 💻 C++ solution code
        └── notes.md         # 📝 Additional insights and tips
```

---

# Problem 08 - Rotate Array

**Difficulty:** Medium  
**Platform:** LeetCode

## Problem Statement

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

## Examples

**Example 1:**  
```
Input: nums = [1,2,3,4,5,6,7], k = 3  
Output: [5,6,7,1,2,3,4]  
Explanation:  
- Rotate 1 step: [7,1,2,3,4,5,6]  
- Rotate 2 steps: [6,7,1,2,3,4,5]  
- Rotate 3 steps: [5,6,7,1,2,3,4]
```

**Example 2:**  
```
Input: nums = [-1,-100,3,99], k = 2  
Output: [3,99,-1,-100]  
Explanation:  
- Rotate 1 step: [99,-1,-100,3]  
- Rotate 2 steps: [3,99,-1,-100]
```

👉 **Check out the C++ solution in `solution.cpp`.**
