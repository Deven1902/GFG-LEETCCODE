/* 
Implementation:- 
    Iterate from arr[1] to arr[N-1] over the array. (since we assume that first element is already sorted)
    Compare the current element (key) to its predecessor. 
    If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.


Complexity:- 
    Time Complexity: O(N^2) Two loops are required for the comparison and sorting.
    Auxiliary Space: O(1) Since No extra Array or space is used.
*/

class Solution
{
    public:
    void insert(int arr[], int i)
    {
          int key = arr[i];
          int j = i-1;
    
           // We run a loop from j and keep shifting the array elements towards right till the element at jth index is greater than element at ith index(key).
           while (j >= 0 && arr[j] > key)
           {
               //Shifting of array elements.
               arr[j+1] = arr[j];
               j = j-1;
           }
           //Then we just insert the current element(key) at (j+1)th index.
           arr[j+1] = key;
    }
    
    public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
       int i;
       for (i = 1; i <n; i++)
          //Calling of insert function.
          insert(arr, i);
    }
};

// time complexity:- O(n2)
// space complexity:- O(1)
