// LeetCode 7 - Reverse Integer
// Topic: Math
// Difficulty: Medium
// Time Complexity: O(log10(n))
// Space Complexity: O(1)
class Solution {
public:
    int reverse(int x) {
        int ans = 0,rem;

        while(x != 0){
            
            rem = x % 10;
            x /=10;
            if(ans > INT_MAX / 10 || ans < INT_MIN/10)
            return 0;
            ans = ans*10 + rem;
        }
         return ans;
    }
};