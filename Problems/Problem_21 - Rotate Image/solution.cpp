#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // Create a temporary matrix to hold rotated values 🔄
        vector<vector<int>> ans(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][n - 1 - i] = matrix[i][j];
            }
        }
        // Copy back to original matrix
        matrix = ans;
    }
};
