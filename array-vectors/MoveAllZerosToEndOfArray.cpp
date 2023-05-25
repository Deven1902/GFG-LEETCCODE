/*
Problem:- move zeros to the end of array. 
Problem Link:- https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1 
*/

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	    // we are swapping the numbers with themselves to keep them in the same plave till the 0 is not encountered. 
	    // once we encounter 0, the if condition fails, swap doesnt happen
	    // the next swap will happen when we encpunter the non zero number. 
	    // this way we will take all the non zero numbers ahead, and all the 0s will be pushed at the end of the array. 
	            
	    int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
               swap(arr[i],arr[cnt]);
               cnt++;
            }
        }
	}
};

// time complexity:- O(n) 
// space complexity:- O(1) 
