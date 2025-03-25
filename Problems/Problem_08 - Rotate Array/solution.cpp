#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k >= n
        
        // Reverse the entire array 📖
        reverse(nums.begin(), nums.end());
        
        // Reverse the first k elements 🔄
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the remaining n-k elements 🔄
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6,7};  // Example input
    int k = 3;
    sol.rotate(nums, k);
    
    cout << "Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
