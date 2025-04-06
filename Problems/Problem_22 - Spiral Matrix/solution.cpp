#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = n - 1, top = 0, bottom = m - 1;
        vector<int> ans;
        
        // Traverse the matrix in layers 🔄
        while (top <= bottom && left <= right) {
            // 1. Move right ➡️
            for (int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++;
            
            // 2. Move down ⬇️
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;
            
            // 3. Move left ⬅️ (if still in bounds)
            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    ans.push_back(matrix[bottom][j]);
                bottom--;
            }
            
            // 4. Move up ⬆️ (if still in bounds)
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        
        return ans;
    }
};
