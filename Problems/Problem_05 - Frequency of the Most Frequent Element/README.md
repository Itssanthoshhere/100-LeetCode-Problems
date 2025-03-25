### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_05%20-%20Frequency%20of%20the%20Most%20Frequent%20Element/
        ├── README.md        # 📄 Problem statement, explanation, and examples
        ├── solution.cpp     # 💻 C++ solution code
        └── notes.md         # 📝 Additional insights and tips
```

# Problem 05 - Frequency of the Most Frequent Element

**Difficulty:** Medium  
**Platform:** LeetCode

## Problem Statement

Given an integer array `nums` and an integer `k`, you can perform at most `k` operations where in one operation, you choose an index of `nums` and increment the element at that index by 1.  
Return the maximum possible frequency of an element after performing at most `k` operations.

## Examples

**Example 1:**  
```
Input: nums = [1,2,4], k = 5  
Output: 3  
Explanation: Increment the first element three times and the second element two times to make nums = [4,4,4].  
4 has a frequency of 3.
```

**Example 2:**  
```
Input: nums = [1,4,8,13], k = 5  
Output: 2  
Explanation:  
- Increment the first element three times to get [4,4,8,13]. Frequency of 4 is 2.  
- Alternatively, increment the second element four times or the third element five times to achieve a frequency of 2.
```

**Example 3:**  
```
Input: nums = [3,9,6], k = 2  
Output: 1
```

## Approach & Explanation

1. **Sorting:**  
   Sort the array to bring similar elements closer. ✨

2. **Sliding Window:**  
   Use two pointers to maintain a window and a running total of elements.  
   Increment the right pointer while checking if the total operations needed (using the current window) exceeds `k`.  
   If it does, move the left pointer to shrink the window. 🔄

3. **Result Calculation:**  
   Track the maximum window size (frequency) that satisfies the condition. ✅

👉 **Check out the C++ solution in `solution.cpp`.**
