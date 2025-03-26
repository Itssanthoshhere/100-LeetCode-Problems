#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        
        // Traverse each element in the array 🔍
        for (auto it : nums) {
            sum += it;               // Add current element to sum ➕
            maxi = max(sum, maxi);   // Update maximum if current sum is larger 📈
            if (sum < 0) {           // If the sum drops below zero, reset it to zero 🔄
                sum = 0;
            }
        }
        
        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};  // Example input
    cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums) << endl;
    return 0;
}
