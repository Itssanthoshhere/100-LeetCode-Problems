### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_03%20-%20Valid%20Palindrome/
        ├── README.md        # Contains problem statement & explanation
        ├── solution.cpp     # C++ solution code
        └── notes.md         # Additional insights or notes (optional)
```

---

# Problem 03 - Valid Palindrome

**Difficulty:** Easy  
**Platform:** LeetCode

## Problem Statement

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.

### Examples:

**Example 1:**  
```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
```

**Example 2:**  
```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
```

**Example 3:**  
```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters. Since an empty string reads the same forward and backward, it is a palindrome.
```

---

## Explanation

The solution involves using two pointers to traverse the string from both ends. Non-alphanumeric characters are skipped, and uppercase letters are converted to lowercase before comparison. The string is a palindrome if the characters match until the pointers meet.

---

## Implementation

Check out the C++ solution in `solution.cpp`.
```

---
