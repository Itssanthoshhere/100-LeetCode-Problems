#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0;
        
        // Traverse the array 🔍
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                // Swap the current element with the element at nonZeroIndex 🔄
                swap(nums[nonZeroIndex], nums[i]);
                nonZeroIndex++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0,1,0,3,12};  // Example input
    sol.moveZeroes(nums);
    
    cout << "Modified Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
