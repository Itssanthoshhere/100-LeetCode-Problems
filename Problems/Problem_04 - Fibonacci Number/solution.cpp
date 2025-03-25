#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }
        // Recursively calculate the Fibonacci number
        int last = fib(n - 1);
        int slast = fib(n - 2);
        return last + slast;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Fibonacci number F(" << n << ") = " << sol.fib(n) << endl;
    return 0;
}
