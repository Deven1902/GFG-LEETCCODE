/*
Problem:- https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
Problem Link:- Remove duplicate elements from sorted Array

Given a sorted array A[] of size N, delete all the duplicated elements from A[]. 
Modify the array such that if there are X distinct elements in it then the first X positions of the array 
should be filled with them in increasing order and return the number of distinct elements in the array.

Note:
1. Don't use set or HashMap to solve the problem.
2. You must return the number of distinct elements(X) in the array, the generated output will print all the elements of the modified array from index 0 to X-1.
*/ 

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        
        int res = 1;
        for(int i=0; i<n; i++) {
            if(a[i] != a[res-1]) {
                a[res] = a[i];
                res ++;
            }
        }
        return res;
    }
};

// time complexity:- O(n)
// spcae complexity:- O(1)
