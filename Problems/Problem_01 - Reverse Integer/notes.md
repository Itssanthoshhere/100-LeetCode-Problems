
### 📌 **Notes & Insights**
1. **Why Use `long`?**  
   - Since multiplying by `10` increases the number rapidly, using `long` helps detect overflow before returning.  
   
2. **Handling Negative Numbers:**  
   - The approach works for both positive and negative numbers because `%` and `/` handle negative values correctly in C++.  
   
3. **Edge Cases:**  
   - `x = 0` → Output `0`  
   - `x = 120` → Output `21` (removes leading zero)  
   - Overflow cases → Return `0`  

---
