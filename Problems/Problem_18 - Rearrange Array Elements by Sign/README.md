### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_18%20-%20Rearrange%20Array%20Elements%20by%20Sign/
        ├── README.md        # 📄 Problem statement, explanation, and examples
        ├── solution.cpp     # 💻 C++ solution code
        └── notes.md         # 📝 Additional insights and tips
```

# Problem 18 - Rearrange Array Elements by Sign

**Difficulty:** Medium  
**Platform:** LeetCode

## Problem Statement

Given a 0-indexed integer array `nums` of even length containing an equal number of positive and negative integers, rearrange the array so that:
- Every consecutive pair of integers have opposite signs.
- The order of the positive integers is preserved.
- The order of the negative integers is preserved.
- The rearranged array begins with a positive integer.

Return the modified array after rearranging the elements to satisfy these conditions.

## Examples

**Example 1:**  
```
Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
Explanation: 
The positive integers are [3,1,2] and negatives are [-2,-5,-4]. 
Arranged alternately starting with a positive: [3,-2,1,-5,2,-4].
```

**Example 2:**  
```
Input: nums = [-1,1]
Output: [1,-1]
Explanation:
There is 1 positive and 1 negative. The result is [1,-1].
```

👉 **Check out the C++ solution in `solution.cpp`.**
