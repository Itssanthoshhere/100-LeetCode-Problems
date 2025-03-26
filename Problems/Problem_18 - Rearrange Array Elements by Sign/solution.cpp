#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);

        int posIndex = 0; // Starting index for positive numbers (even indices)
        int negIndex = 1; // Starting index for negative numbers (odd indices)

        // Traverse the input array
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                ans[negIndex] = nums[i]; // Place negative at odd index 🟥
                negIndex += 2;
            } else {
                ans[posIndex] = nums[i]; // Place positive at even index 🟩
                posIndex += 2;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,1,-2,-5,2,-4};  // Example input
    vector<int> result = sol.rearrangeArray(nums);
    
    cout << "Rearranged Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
