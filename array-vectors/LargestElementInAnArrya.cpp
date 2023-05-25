/*
Problem:- Largest Element in Array

Problem link:- https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1 

*/
#include <bits/stdc++.h>
using namespace std ;

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int res = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] > arr[res])
                res = i;
        }
        
        return arr[res]; 
    }
};


// time complexity:- O(n)

// space complexity:- O(1) -> no extra space required. 