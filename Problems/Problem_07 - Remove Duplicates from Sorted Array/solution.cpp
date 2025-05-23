#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int i = 0;
        // Traverse the array with pointer j
        for (int j = 1; j < nums.size(); j++) {
            // If a new unique element is found, move it forward
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};  // Example input
    int k = sol.removeDuplicates(nums);
    cout << "Number of unique elements (k): " << k << endl;
    
    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
