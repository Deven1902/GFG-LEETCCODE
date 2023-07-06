class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int mini=INT_MAX;
        int i=0, j=0;

        while(i<nums.size()) {
            sum +=nums[i];
            while(sum>=target) {
                sum-=nums[j];
                mini=min(i-j+1, mini);
                j++;
            }
            i++;
        }
        if(mini==INT_MAX)
            return 0;
        
        return mini;
    }
};