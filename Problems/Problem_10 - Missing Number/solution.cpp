#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        // Use XOR to cancel out the indices and numbers
        for (int i = 0; i < n; i++) {
            ans ^= nums[i] ^ i;
        }
        ans ^= n;  // XOR with n to get the missing number
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {9,6,4,2,3,5,7,0,1};  // Example input
    cout << "Missing Number: " << sol.missingNumber(nums) << endl;
    return 0;
}
