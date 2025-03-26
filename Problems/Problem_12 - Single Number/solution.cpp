#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        // XOR all numbers together 🔄
        for (int i = 0; i < nums.size(); i++) {
            xorr ^= nums[i];
        }
        return xorr;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,1,2,1,2};  // Example input
    cout << "Single Number: " << sol.singleNumber(nums) << endl;
    return 0;
}
