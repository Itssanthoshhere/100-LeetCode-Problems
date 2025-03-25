#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes.
        if (x < 0) {
            return false;
        }
        long revNum = 0;
        int digit;
        int temp = x;
        
        // Reverse the number.
        while (x != 0) {
            digit = x % 10;
            revNum = (revNum * 10) + digit;
            x = x / 10;
        }
        
        // Check if the reversed number equals the original.
        return (revNum == temp);
    }
};

int main() {
    Solution sol;
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    
    cout << (sol.isPalindrome(x) ? "true" : "false") << endl;
    return 0;
}
