class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //     k %= nums.length;
    //     int temp, prev;

    //     for(int i=0;i<k; i++) {
    //         prev = nums[nums.length-1];

    //         for(int j=0; j<nums.lenght; j++){
    //             temp = nums[j];
    //             nums[j] = prev;
    //             prev = temp;
    //         }
    //     }

        int a[nums.size()];

        for (int i = 0; i < nums.size(); i++) {
            a[(i + k) % nums.size()] = nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = a[i];
        }
    }
};