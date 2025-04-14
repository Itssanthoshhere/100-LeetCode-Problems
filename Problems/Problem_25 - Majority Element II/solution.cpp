#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        map<int, int> freq;
        int threshold = n / 3 + 1;

        for (int num : nums) {
            freq[num]++;
            // When the frequency reaches the threshold, add to result.
            if (freq[num] == threshold) {
                result.push_back(num);
            }
            // Maximum of 2 elements can occur more than n/3 times.
            if (result.size() == 2) {
                break;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3}; // Example input
    vector<int> res = sol.majorityElement(nums);
    
    cout << "Majority Elements: ";
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
