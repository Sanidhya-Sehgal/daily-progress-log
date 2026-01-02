/*
Problem: 961. N-Repeated Element in Size 2N Array

Approach:
- Use an unordered_set to track elements seen so far.
- Traverse the array:
    - If an element is already in the set, return it.
    - Otherwise, insert it into the set.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return num;
            }
            seen.insert(num);
        }

        return -1; // Guaranteed not to reach here
    }
};

int main() {
    vector<int> nums = {2, 1, 2, 5, 3, 2};

    Solution obj;
    cout << obj.repeatedNTimes(nums);

    return 0;
}
