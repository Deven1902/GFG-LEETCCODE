/* 
Problem :- Binary search .
Given a sorted array of size N and an integer K, find the position(0-based indexing) at which K is present in the array using binary search.

Problem Link:- https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?

Cpp solution below. 
*/

/* 
Binary Search Algorithm: The basic steps to perform Binary Search are:

    Begin with the mid element of the whole array as a search key.
    If the value of the search key is equal to the item then return an index of the search key.
    Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
    Otherwise, narrow it to the upper half.
    Repeatedly check from the second point until the value is found or the interval is empty.
    
*/

// time complexitry:- O(log n)

// space:- O(1)

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
