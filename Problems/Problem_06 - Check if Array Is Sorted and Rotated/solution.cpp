#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breakCount = 0;
        
        // Traverse through the array to find "breaks"
        for (int i = 0; i < n; i++) {
            // Use modulo to handle circular check
            if (nums[i] > nums[(i + 1) % n]) {
                breakCount++;
            }
        }
        
        // If there is more than one break, the array is not sorted and rotated
        return breakCount <= 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,4,5,1,2}; // Example input
    cout << (sol.check(nums) ? "true" : "false") << endl;
    return 0;
}
