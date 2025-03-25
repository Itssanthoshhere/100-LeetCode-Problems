
### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_02%20-%20Palindrome%20Number/
        ├── README.md        # Contains problem statement & explanation
        ├── solution.cpp     # C++ solution code
        └── notes.md         # Any additional insights or notes
```

---

### **README.md**

```markdown
# Problem 02 - Palindrome Number

**Difficulty:** Easy  
**Platform:** LeetCode

## Problem Statement

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

### Examples:

**Example 1:**  
```
Input: x = 121  
Output: true  
Explanation: 121 reads as 121 from left to right and from right to left.
```

**Example 2:**  
```
Input: x = -121  
Output: false  
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore, it is not a palindrome.
```

**Example 3:**  
```
Input: x = 10  
Output: false  
Explanation: Reads 01 from right to left. Therefore, it is not a palindrome.
```

---

## Explanation

This problem checks if an integer is a palindrome. Since negative numbers can't be palindromes (as the negative sign only appears on the left), we immediately return `false` for negative inputs. The approach involves reversing the number and comparing it with the original number. Special care is taken to use a larger data type for reversing the number to handle potential overflow.

---

## Implementation

Check out the C++ solution in `solution.cpp`.
```
