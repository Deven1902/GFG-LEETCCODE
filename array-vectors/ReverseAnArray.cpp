/*
Problem:- reverse an array.
Gfg. 
*/

#include <bits/stdc++.h>
using namespace std;

 void reverse(int arr[], int n)
{
	int low = 0, high = n - 1;

	while(low < high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
    // this loop will run always for n/2 times... as when we will reach to the mid of the array...
    // elements on the alternate halves would have been already swapped. 
}

    // time complexity:- O(n)
    // space complexity:- O(1)
    
int main() {
	
      int arr[] = {10, 5, 7, 30}, n = 4;

      cout<<"Before Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       reverse(arr, n);

       cout<<"After Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}