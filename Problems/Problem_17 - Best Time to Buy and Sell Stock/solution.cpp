#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxProfit = 0;
        int n = prices.size();

        // Traverse through the array 📈
        for (int i = 0; i < n; i++) {
            int cost = prices[i] - mini;      // Potential profit if sold today 💰
            maxProfit = max(maxProfit, cost);   // Update max profit if current profit is higher
            mini = min(mini, prices[i]);        // Update the minimum price seen so far 🔻
        }

        return maxProfit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7,1,5,3,6,4};  // Example input
    cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;
    return 0;
}
