#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int result = nums[0];
        // Boyer-Moore Voting Algorithm 🗳️
        for (int i = 1; i < nums.size(); i++) {
            if (count == 0) {
                result = nums[i];
            }
            if (result == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,2,1,1,1,2,2};  // Example input
    cout << "Majority Element: " << sol.majorityElement(nums) << endl;
    return 0;
}
