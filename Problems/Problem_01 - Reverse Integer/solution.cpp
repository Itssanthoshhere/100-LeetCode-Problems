#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int n = 0;
        while(x != 0) {
            int digit = x % 10;
            if ((n > INT_MAX / 10) || (n < INT_MIN / 10)) {
                return 0;
            }
            n = (n * 10) + digit;
            x = x / 10;
        }
        return n;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    Solution sol; // Create an instance of the Solution class
    cout << "Reversed integer: " << sol.reverse(num) << endl; // Call reverse using the instance

    return 0;
}
