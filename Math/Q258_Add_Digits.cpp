// LeetCode 258 - Add Digits
// Topic: Math
// Difficulty: Easy
// Time Complexity: O(1)
// Space Complexity: O(1)
class Solution {
public:
    int addDigits(int num) {
        
        while(num>9)
        {
        int rem,ans = 0;
        while(num != 0 )
        {
            rem = num%10;
            num = num/10;
            ans += rem;
        }
        num = ans;
    }
    return num;
        
    }
};