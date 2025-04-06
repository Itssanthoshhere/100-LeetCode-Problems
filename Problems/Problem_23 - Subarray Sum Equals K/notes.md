# Additional Notes 📝

- **Prefix Sum + Hash Map 🔑:**  
  We maintain a running prefix sum `preSum` and a map `mpp` that counts how many times each prefix sum has appeared.  
  - For each new `preSum`, we check if `preSum - k` exists in the map; if so, it indicates a subarray summing to `k`.

- **Initialization:**  
  `mpp[0] = 1` accounts for subarrays starting at index 0.

- **Time Complexity ⏱️:**  
  O(n), since we traverse the array once and perform O(1) map operations per element.

- **Space Complexity 🚀:**  
  O(n) extra space for the hash map in the worst case.

- **Why It Works 💡:**  
  By converting the subarray sum problem into checking prefix-sum differences, we avoid nested loops and achieve linear performance.

Happy coding and keep mastering prefix-sum techniques! 😊
