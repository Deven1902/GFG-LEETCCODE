// problem link:- https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

// Algorithm:- 
 
 /* 
  1) sort the array
  
  2) traverse the array
     if arr[i] is not same as i + 1 
        then return i+1
        
  3) if all the elements are present
        then N is the missing element in the range [1,N]. 
        
 */
 
 
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        sort(array.begin(),array.end());
        
        for(int i = 0; i < n; i++) {
            if(array[i] != i+1)
                return i+1;
        }
    }
};
