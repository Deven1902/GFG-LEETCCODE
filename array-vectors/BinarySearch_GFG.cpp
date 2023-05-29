/* 
Problem :- Binary search .
Given a sorted array of size N and an integer K, find the position(0-based indexing) at which K is present in the array using binary search.

Problem Link:- https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?

Cpp solution below. 
*/

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        
        for(int i = 0; i<n; i++) {
            if(arr[i] == k)
            
                return i;
        }
        return -1; 
    }
};
