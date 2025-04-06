#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp; // Prefix sum → count 📊
        mpp[0] = 1;                  // Base case: one way to have sum = 0
        int preSum = 0;
        int cnt = 0;

        for (int x : nums) {
            preSum += x;             // Update running prefix sum ➕
            int need = preSum - k;   // Sum we want to remove 🔍
            if (mpp.count(need)) {
                cnt += mpp[need];    // Add the number of times 'need' occurred
            }
            mpp[preSum]++;           // Record this prefix sum
        }

        return cnt;                 // Total subarrays summing to k
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,1};
    int k = 2;
    cout << "Count of subarrays = " << sol.subarraySum(nums, k) << endl;
    return 0;
}
