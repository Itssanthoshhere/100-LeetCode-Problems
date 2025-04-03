# Additional Notes 📝

- **Marker Strategy 🔖:**  
  We use the first row and first column as markers to indicate which rows and columns should be zeroed. The variable `col0` is used to handle the first column separately.

- **In-Place Operation 🚀:**  
  The solution modifies the matrix in place without using extra space beyond constant space, achieving O(1) space complexity.

- **Time Complexity ⏱️:**  
  The matrix is traversed a few times, resulting in an overall time complexity of O(m*n).

- **Edge Handling:**  
  Special care is taken for the first row and first column to ensure that marking does not interfere with the final output.

Keep challenging yourself and happy coding! 😊
