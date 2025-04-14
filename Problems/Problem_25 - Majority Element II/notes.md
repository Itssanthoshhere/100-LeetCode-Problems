# Additional Notes 📝

- **Frequency Counting 📊:**  
  This solution leverages a hash map (using `map<int, int>`) to count the occurrence of each element.

- **Threshold Calculation 🔢:**  
  Since an element must appear more than ⌊ n/3 ⌋ times, we set the threshold as `n/3 + 1`.

- **Early Termination 🚀:**  
  As there can be at most 2 elements satisfying the condition, we break out early if the result already contains 2 candidates.

- **Time Complexity ⏱️:**  
  O(n * log n) due to map operations, which is acceptable for many problem sizes. For optimal performance in practice, unordered_map could be used to reduce this to O(n) on average.

Happy coding and keep challenging yourself! 😊
