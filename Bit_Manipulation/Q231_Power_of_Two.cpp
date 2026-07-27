// LeetCode 231 - Power of Two
// Topic: Bit Manipulation
// Difficulty: Easy
// Time Complexity: O(1)
// Space Complexity: O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
        return 0;
        
        while(n != 1){
            if(n%2 == 1)
            return 0;

            n = n/2;
        }
        
        return 1;
    }
};