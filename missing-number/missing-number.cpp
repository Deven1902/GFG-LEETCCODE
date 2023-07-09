class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // code here

        // bit manipulation solution \U0001f447
        
        /*
        int res=0;

        for(int i=0;i<nums.size(); i++) 
            res^=nums[i]^(i+1);

        return res;
        */

        int res = nums.size();
        for(int i=0; i!=nums.size(); i++) 
            res=res+i-nums[i];

        return res;

    }
};