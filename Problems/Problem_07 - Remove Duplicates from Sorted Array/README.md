### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_07%20-%20Remove%20Duplicates%20from%20Sorted%20Array/
        ├── README.md        # 📄 Problem statement, explanation, and examples
        ├── solution.cpp     # 💻 C++ solution code
        └── notes.md         # 📝 Additional insights and tips
```

---

# Problem 07 - Remove Duplicates from Sorted Array

**Difficulty:** Easy  
**Platform:** LeetCode

## Problem Statement

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates **in-place** such that each unique element appears only once. The relative order of the elements should be kept the same.  
Return the number of unique elements `k` in `nums`.

🔍 **Details:**  
- Modify `nums` so that the first `k` elements contain the unique elements in the order they originally appeared.  
- The remaining elements in `nums` are not important.  
- Return `k`.

## Examples

**Example 1:**  
```
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: The function should return k = 2, with the first two elements being 1 and 2 respectively.
```

**Example 2:**  
```
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: The function should return k = 5, with the first five elements being 0, 1, 2, 3, and 4 respectively.
```

👉 **Check out the C++ solution in `solution.cpp`.**
