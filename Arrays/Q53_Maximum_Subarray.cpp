// LeetCode 53 - Maximum Subarray
// https://leetcode.com/problems/maximum-subarray/
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution{
    public:
    int maxSubArray(vector<int>& nums){
        int sum=0,maxi=nums[0];
        for(int i=0;i<= nums.size()-1;i++){
            sum+= nums[i];
            maxi = max(maxi,sum);
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};