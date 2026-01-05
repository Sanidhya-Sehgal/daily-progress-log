/*
Problem: Maximize Matrix Sum

Approach:
- Count negative elements.
- Sum absolute values of all elements.
- If number of negatives is even:
    → answer is total absolute sum.
- If number of negatives is odd:
    → subtract 2 * minimum absolute value.

Reason:
- One smallest absolute value must remain negative.

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long totalSum = 0;
        int negativeCount = 0;
        int minAbs = INT_MAX;

        for (auto& row : matrix) {
            for (int val : row) {
                if (val < 0) negativeCount++;
                int absVal = abs(val);
                totalSum += absVal;
                minAbs = min(minAbs, absVal);
            }
        }

        if (negativeCount % 2 == 0) {
            return totalSum;
        } else {
            return totalSum - 2LL * minAbs;
        }
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {-1, -2, -3},
        {1, 2, 3}
    };

    Solution obj;
    cout << obj.maxMatrixSum(matrix);
    return 0;
}
