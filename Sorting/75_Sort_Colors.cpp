#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Sort Colors
    LeetCode: 75
    Topic: Sorting
    Algorithm: Dutch National Flag

    Approach:
    - Use three pointers: low, mid, high.
    - 0 is placed at the low position.
    - 1 is skipped.
    - 2 is placed at the high position.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};