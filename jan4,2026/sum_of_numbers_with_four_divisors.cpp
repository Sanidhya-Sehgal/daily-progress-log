/*
Problem: Sum of Numbers With Exactly Four Divisors

Approach:
- A number has exactly four divisors if:
  1) It is p * q where p and q are distinct primes
  2) It is p^3 where p is prime

For each number:
- Find distinct prime factors
- Check valid condition
- Add sum of divisors if valid

Time Complexity: O(n * sqrt(m))
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for (int x : nums) {
            int n = x;
            int p = 0, q = 0, cnt = 0;

            for (int i = 2; i * i <= n && cnt <= 2; i++) {
                if (n % i == 0) {
                    cnt++;
                    if (cnt == 1) p = i;
                    else q = i;

                    while (n % i == 0) n /= i;
                }
            }

            if (n > 1) {
                cnt++;
                if (cnt == 1) p = n;
                else q = n;
            }

            // Case 1: p * q
            if (cnt == 2 && 1LL * p * q == x) {
                ans += 1 + p + q + x;
            }
            // Case 2: p^3
            else if (cnt == 1 && 1LL * p * p * p == x) {
                ans += 1 + p + p * p + x;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {21, 4, 7};
    Solution obj;
    cout << obj.sumFourDivisors(nums);
    return 0;
}
