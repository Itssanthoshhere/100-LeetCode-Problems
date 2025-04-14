#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        // Generate each row of Pascal's Triangle 🔺
        for (int i = 1; i <= numRows; i++) {
            vector<int> row;
            long long val = 1;
            row.push_back(1);  // Each row starts with 1 ⭐
            for (int col = 1; col < i; col++) {
                // Compute the next element using the binomial coefficient formula 📐
                val = val * (i - col);
                val = val / col;
                row.push_back(val);
            }
            ans.push_back(row);
        }
        
        return ans;
    }
};

int main() {
    Solution sol;
    int numRows = 5;  // Example input
    vector<vector<int>> triangle = sol.generate(numRows);
    
    cout << "Pascal's Triangle:" << endl;
    for (auto &row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
