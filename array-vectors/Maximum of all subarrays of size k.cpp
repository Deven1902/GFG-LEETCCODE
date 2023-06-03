// Algorithm 

/* 
1) create a bested loop. 
    outer loop from index to n-kth element. 
    inner loop will then run for K iterations. 
    
2) create a varibale to store max if K elements traversed by the inner loop.

3) find max element by traversing the inner loop. 

4) print max element in every iteration of the outer loop. 

*/


class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k) {
        // your code here
        vector<int> v;
        deque<int> dq;
        
        for (int i = 0; i < k; i++) {
            while (!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
                
            dq.push_back(i);
        }
        
        for (int i = k; i < n; i++) {
            v.push_back(arr[dq.front()]);
            
            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
                
            while (!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
                
            dq.push_back(i);
        }
        
        v.push_back(arr[dq.front()]);
        return v;
    }
    
};

/*
    naive apporach:- 
    
        int j, max; 
        
        for(int i=0; i<n-k; i++) {
            max = arr[i];
            
            for(j=1; j<k; j++) {
                if(arr[i+j] > max)
                    max = arr[i+j];
            }
            cout<< max << " "; 
        }
        
        // time complexity:- O(N2). 
        
*/
