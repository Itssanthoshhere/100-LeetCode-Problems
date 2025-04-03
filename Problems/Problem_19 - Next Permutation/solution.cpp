#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        
        // Step 1: Find the first index from the right that violates the descending order 🔍
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }
        
        // If no such index is found, reverse the entire array to get the smallest permutation 🔄
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        // Step 2: Find the smallest element greater than nums[ind] from the right side and swap them 🔄
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }
        
        // Step 3: Reverse the subarray to the right of ind to get the next permutation 🎯
        reverse(nums.begin() + ind + 1, nums.end());
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3}; // Example input
    sol.nextPermutation(nums);
    
    cout << "Next Permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
