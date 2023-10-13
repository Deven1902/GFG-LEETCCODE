class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    // Initialize variables for left and right sums
    int l = 0, r = 0;

    // Calculate the sum of all elements in the array
    for (auto it : nums)
        r += it;

    // Iterate through the array
    for (int i = 0; i < nums.size(); i++) {
        // Subtract the current element from the right sum
        r -= nums[i];
        
        // Check if the left and right sums are equal
        if (l == r)
            // Return the index if found
            return i;

        // Add the current element to the left sum
        l += nums[i];
    }

    // If no such index is found, return -1
    return -1;
}

};