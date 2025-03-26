#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a map to store numbers and their indices 🗺️
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int moreNeeded = target - num;  // Calculate the complement ➕
            // If the complement exists, we've found our solution 🔍
            if (mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};
            }
            // Otherwise, store the current number with its index
            mpp[num] = i;
        }
        return {-1, -1};  // Fallback (should never be reached given the problem's guarantees)
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};  // Example input
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}
