#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;
        
        // Traverse through the array 🔍
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++; // Increase count if 1 is found ➕
                maxi = max(maxi, cnt); // Update maximum if needed 📈
            } else {
                cnt = 0; // Reset count on encountering 0 🔄
            }
        }
        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,0,1,1,1};  // Example input
    cout << "Maximum consecutive ones: " << sol.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
