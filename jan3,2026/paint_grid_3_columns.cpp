/*
Problem: Paint Grid with Three Colors (n x 3)

Approach:
- Use Dynamic Programming with Memoization.
- At each row, try all valid color combinations for 3 columns.
- Ensure:
    1. No two adjacent columns have the same color.
    2. No column has the same color as the cell directly above it.

State:
dp[row][prev1][prev2][prev3]

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int row, int n, int prev1, int prev2, int prev3, int mod,
              vector<vector<vector<vector<int>>>> &dp) {
        if (row == n) {
            return 1;
        }

        if (dp[row][prev1][prev2][prev3] != -1) {
            return dp[row][prev1][prev2][prev3];
        }

        int ans = 0;

        for (int c1 = 1; c1 <= 3; c1++) {
            if (c1 == prev1) continue;

            for (int c2 = 1; c2 <= 3; c2++) {
                if (c2 == prev2 || c2 == c1) continue;

                for (int c3 = 1; c3 <= 3; c3++) {
                    if (c3 == prev3 || c3 == c2) continue;

                    ans = (ans + solve(row + 1, n, c1, c2, c3, mod, dp)) % mod;
                }
            }
        }

        return dp[row][prev1][prev2][prev3] = ans;
    }

    int numOfWays(int n) {
        int mod = 1e9 + 7;

        vector<vector<vector<vector<int>>>> dp(
            n, vector<vector<vector<int>>>(
                   4, vector<vector<int>>(4, vector<int>(4, -1))));

        return solve(0, n, 0, 0, 0, mod, dp);
    }
};

int main() {
    int n = 3;
    Solution obj;
    cout << obj.numOfWays(n);
    return 0;
}
