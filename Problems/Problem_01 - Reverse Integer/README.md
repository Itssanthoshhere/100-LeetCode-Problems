### **Directory Structure**

```
100-Days-of-Algorithms/  
│── README.md  
│  
├── Problems/  
│   ├── Problem_01/  
│   │   ├── problem.md          # Problem statement & explanation  
│   │   ├── solution.cpp        # C++ solution  
│   │   ├── notes.md            # Additional insights (if any)  
```

---

### 📌 **Problem Statement**  

#### **Problem 1: Reverse Integer**  
**Given an integer `x`, return `x` with its digits reversed.**  
- If reversing `x` causes the value to go outside the **32-bit signed integer range** (`−2³¹` to `2³¹ − 1`), return `0` instead.  

#### **Example 1:**  
```
Input: x = 123  
Output: 321  
```
#### **Example 2:**  
```
Input: x = -456  
Output: -654  
```
#### **Example 3:**  
```
Input: x = 1534236469  
Output: 0  (overflow case)  
```
