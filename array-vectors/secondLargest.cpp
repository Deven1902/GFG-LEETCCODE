/*
Problem:- Second Largest .

GFG. 
problem link:- Given an array Arr of size N, print second largest distinct element from an array. 

*/

#include<bits/stdc++.h>
using namespace std; 

class Solution{
public:	
	// Function returns the second largest elements
	
	int print2largest(int arr[], int n) {
	    // code here
	    int i, first, second;
	    
	    first = second = INT_MIN;
	    for (i = 0; i < n; i++) {
	        // If current element is greater than first then update both first and second
	       
	        if (arr[i] > first) {
	            second = first;
	            first = arr[i];
	        }

	        // If arr[i] is in between first and second then update second
	        
	        else if (arr[i] > second && arr[i] != first) {
	            second = arr[i];
	        }
	    }
	    
	    if (second == INT_MIN)
	        return -1;
	    else
	        return second;
	}
};

// time complexity :- O(n); 
// space complexity:- O(1);

