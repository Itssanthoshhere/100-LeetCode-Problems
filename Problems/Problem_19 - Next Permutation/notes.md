# Additional Notes 📝

- **Finding the Pivot 🔍:**  
  We traverse from the right to find the first element (pivot) that is smaller than its next element. This identifies where the next permutation needs to be generated.

- **Swap for Incrementing ➕:**  
  Once the pivot is found, we search for the smallest element greater than the pivot (from the right) and swap them. This step ensures the permutation is lexicographically larger.

- **Reversing the Suffix 🔄:**  
  Finally, reversing the subarray to the right of the pivot guarantees that the new permutation is the next smallest lexicographical order.

- **Time Complexity ⏱️:**  
  This solution runs in O(n) time, making it efficient for large arrays.

- **Space Complexity 🚀:**  
  The in-place modification uses O(1) extra space.

Happy coding and keep challenging yourself! 😊
