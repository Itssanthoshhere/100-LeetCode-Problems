### **Directory Structure**

```
100-LeetCode-Problems/
└── Problems/
    └── Problem_17%20-%20Best%20Time%20to%20Buy%20and%20Sell%20Stock/
        ├── README.md        # 📄 Problem statement, explanation, and examples
        ├── solution.cpp     # 💻 C++ solution code
        └── notes.md         # 📝 Additional insights and tips
```

# Problem 17 - Best Time to Buy and Sell Stock

**Difficulty:** Easy  
**Platform:** LeetCode

## Problem Statement

You are given an array `prices` where `prices[i]` is the price of a given stock on the ith day.  
Your goal is to maximize profit by choosing a single day to buy one stock and a later day to sell that stock.  
Return the maximum profit you can achieve from this transaction. If no profit is possible, return 0.

## Examples

**Example 1:**  
```
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6 - 1 = 5.
```

**Example 2:**  
```
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: No profit can be achieved, so return 0.
```

👉 **Check out the C++ solution in `solution.cpp`.**
