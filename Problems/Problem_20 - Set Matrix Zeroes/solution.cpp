#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1; // Flag to mark if first column needs to be zeroed

        // Mark the rows and columns that need to be zeroed 🔍
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // Mark the row
                    if (j != 0) {
                        matrix[0][j] = 0; // Mark the column
                    } else {
                        col0 = 0; // Special flag for first column
                    }
                }
            }
        }

        // Use the markers to set elements to zero (skip first row & column) 🔄
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle the first row separately if needed 📋
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
        // Handle the first column separately if needed 📋
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };  // Example input
    sol.setZeroes(matrix);

    cout << "Modified Matrix:" << endl;
    for (auto row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
