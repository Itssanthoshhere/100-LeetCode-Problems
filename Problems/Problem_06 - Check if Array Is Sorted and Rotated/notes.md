# Additional Notes 📝

- **Circular Check 🔄:**  
  The modulo operation `(i + 1) % n` helps check the transition from the end of the array to the beginning.

- **Break Count Logic 🔢:**  
  Counting the number of "breaks" (where `nums[i] > nums[i+1]`) is key.  
  - 0 or 1 break: ✅ Array is sorted and rotated.
  - More than 1 break: ❌ Array cannot be obtained by rotating a sorted array.

- **Edge Cases:**  
  Ensure that arrays with no rotation (already sorted) and arrays with duplicates are handled correctly.

This problem is a great exercise in understanding array rotation and logical conditions in algorithm design!