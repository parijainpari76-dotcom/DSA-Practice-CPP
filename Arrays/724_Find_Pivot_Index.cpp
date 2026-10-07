/*
LeetCode: 724
Problem: Find Pivot Index

Approach:
- Calculate total sum of the array.
- Maintain left sum while traversing.
- Calculate right sum using:
  rightSum = totalSum - currentElement - leftSum
- If leftSum == rightSum, return the current index.
- Otherwise return -1.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int totalSum = 0;
        int leftSum = 0;

        
        for (int i = 0; i < a.size(); i++) {
            totalSum += a[i];
        }

        
        for (int i = 0; i < a.size(); i++) {
            int rightSum = totalSum - a[i] - leftSum;

            if (leftSum == rightSum) {
                return i;
            }

            leftSum += a[i];
        }

        return -1;
    }
};