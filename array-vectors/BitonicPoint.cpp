class Solution{
public:
	
	// A binary search based function
    // that returns index of a peak element
    
    int findPeakUtil(int arr[], int low, int high, int n)
    {
        // Find index of middle element low + (high - low) / 2
        
        int mid = low + (high - low) / 2;
    
        // Compare middle element with its neighbours
        
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&  (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return arr[mid];
    
        // If middle element is not peak and its
        // left neighbour is greater than it,
        // then left half must have a peak element
        
        else if (mid > 0 && arr[mid - 1] > arr[mid])
            return findPeakUtil(arr, low, (mid - 1), n);
    
        // If middle element is not peak and its
        // right neighbour is greater than it,
        // then right half must have a peak element
        
        else
            return findPeakUtil(
                arr, (mid + 1), high, n);
    }

	int findMaximum(int arr[], int n) {
	    // code here
	    // efficient approach -> divide and conquer. 
	    
	    // algorithm:- 
	    
	    /* 
    	    Create two variables, l and r, initialize l = 0 and r = n-1
            Iterate the steps below till l <= r, lowerbound is less than the upperbound
            Check if the mid value or index mid = low + (high - low) / 2, is the peak element or not, if yes then print the element and terminate.
            Else if the element on the left side of the middle element is greater then check for peak element on the left side, i.e. update r = mid - 1
            Else if the element on the right side of the middle element is greater then check for peak element on the right side, i.e. update l = mid + 1
	    */
	    
	    return findPeakUtil(arr, 0, n - 1, n);
	}
};

time complexity:- O(log n) 
  
  
// naive approach 
	    
	    /* 
	    int max = 0; 
	    for(int i=0; i<n; i++) {
	        if(arr[i] >= max)
	            max = arr[i]; 
	    }
	    
	    return max; 
	    */
time complexity :- O(N)
