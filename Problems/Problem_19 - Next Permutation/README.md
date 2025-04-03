### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_31%20-%20Next%20Permutation/
        ├── README.md        # 📄 Problem statement, explanation, and examples
        ├── solution.cpp     # 💻 C++ solution code
        └── notes.md         # 📝 Additional insights and tips
```

# Problem 31 - Next Permutation

**Difficulty:** Medium  
**Platform:** LeetCode

## Problem Statement

A permutation of an array of integers is an arrangement of its members into a sequence or linear order.  
For example, for `arr = [1,2,3]`, the following are all the permutations:  
`[1,2,3]`, `[1,3,2]`, `[2,1,3]`, `[2,3,1]`, `[3,1,2]`, `[3,2,1]`.

The **next permutation** of an array is the next lexicographically greater permutation of its integers.  
- If such an arrangement is not possible, rearrange the array as the lowest possible order (i.e., sorted in ascending order).

For example:  
- Next permutation of `[1,2,3]` is `[1,3,2]`.  
- Next permutation of `[3,2,1]` is `[1,2,3]`.

**Task:**  
Given an array of integers `nums`, modify the array in-place to become its next permutation using only constant extra memory.

## Examples

**Example 1:**  
```
Input: nums = [1,2,3]
Output: [1,3,2]
```

**Example 2:**  
```
Input: nums = [3,2,1]
Output: [1,2,3]
```

**Example 3:**  
```
Input: nums = [1,1,5]
Output: [1,5,1]
```

👉 **Check out the C++ solution in `solution.cpp`.**
