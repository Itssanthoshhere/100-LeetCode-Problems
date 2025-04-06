# Additional Notes 📝

- **Layer-by-Layer Traversal 🔄:**  
  Use four pointers (`top`, `bottom`, `left`, `right`) to define the current layer's boundaries and peel it off in 4 steps: right, down, left, up.

- **Boundary Checks ✅:**  
  After moving right/down, adjust the pointers and check `top <= bottom` or `left <= right` before the next direction to avoid duplicates.

- **Time Complexity ⏱️:**  
  O(m * n), since each element is visited exactly once.

- **Space Complexity 🚀:**  
  O(1) extra space (excluding the output list), as we only use a few pointers.

- **Use Cases 💡:**  
  Spiral traversal is useful in image processing and matrix-based simulations.

Happy coding and keep spiraling through challenges! 😊
