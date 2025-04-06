# Additional Notes 📝

- **In-Place Requirement 🚀:**  
  Although this solution uses an extra matrix (`ans`), the problem asks for in-place rotation. A true in-place approach uses two steps:
  1. **Transpose** the matrix (swap `matrix[i][j]` with `matrix[j][i]`).  
  2. **Reverse** each row.

- **Time Complexity ⏱️:**  
  O(n²), since we visit each element a constant number of times.

- **Space Complexity 💾:**  
  Current solution uses O(n²) extra space. In-place version would use O(1) extra space.

- **In-Place Version Sketch:**  
  ```cpp
  // Transpose
  for (int i = 0; i < n; i++)
    for (int j = i+1; j < n; j++)
      swap(matrix[i][j], matrix[j][i]);
  // Reverse each row
  for (int i = 0; i < n; i++)
    reverse(matrix[i].begin(), matrix[i].end());
