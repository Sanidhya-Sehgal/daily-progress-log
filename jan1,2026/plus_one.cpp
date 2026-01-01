#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    vector<int> digits = {1, 2, 3};
    Solution s;
    vector<int> result = s.plusOne(digits);

    for (int d : result) cout << d << " ";
    return 0;
}
