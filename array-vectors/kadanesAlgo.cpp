class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
        long long o_sum=arr[0], c_sum=arr[0];
        
        for(int i=1; i<n; i++) {
            if(c_sum>=0)
                c_sum += arr[i];
                
            else
                c_sum = arr[i];
                
            if(c_sum > o_sum)
                o_sum = c_sum;
        }
        
        return o_sum;
    }
};
