### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_06%20-%20Check%20if%20Array%20Is%20Sorted%20and%20Rotated/
        ├── README.md        # 📄 Problem statement, explanation, and examples
        ├── solution.cpp     # 💻 C++ solution code
        └── notes.md         # 📝 Additional insights and tips
```

---

# Problem 06 - Check if Array Is Sorted and Rotated

**Difficulty:** Easy  
**Platform:** LeetCode

## Problem Statement

Given an array `nums`, return `true` if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return `false`.

🔍 **Details:**
- There may be duplicates in the original array.
- A rotated array is defined as an array where for every valid index `i`, the condition `B[i] == A[(i + x) % A.length]` holds, where `x` is the number of rotations.

## Examples

**Example 1:**  
```
Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the element of value 3: [3,4,5,1,2].
```

**Example 2:**  
```
Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
```

**Example 3:**  
```
Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
No rotation is needed.
```

## Approach & Explanation

1. **Traverse the Array:**  
   Iterate through the array and count the number of "breaks" where an element is greater than the next one (considering the array as circular). 🔄

2. **Evaluate Breaks:**  
   - If there is **0 or 1 break**, the array is considered sorted and rotated.
   - If there are **more than 1 break**, the array cannot be obtained by rotating a sorted array. ❌

👉 **Check out the C++ solution in `solution.cpp`.**
