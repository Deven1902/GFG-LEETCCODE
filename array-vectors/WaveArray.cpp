// Wave aarray. 
// problem link:- https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1

class Solution{
    public:
  
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
  
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        
        for(int i=0; i<n; i += 2) {
            // Swap current element with the previous element if it is smaller
            if (i > 0 && arr[i] < arr[i - 1])
                swap(arr[i], arr[i - 1]);
            
            // Swap current element with the next element if it is smaller  
            if (i < n - 1 && arr[i] < arr[i + 1]) 
                swap(arr[i], arr[i + 1]);
        }
    }
};

 Time Complexity: O(n);
 Auxiliary Space: O(1);
