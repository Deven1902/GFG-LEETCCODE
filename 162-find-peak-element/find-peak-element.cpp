class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        int s=0; 
        int e=n-1;

        int mid = (s+e)/2;


        // when u write s<=e... program will run into an infinite loop. 

        while(s<e) {
            // Check if the middle element is less than the next element. If true, update the start index to mid + 1
            if(arr[mid] < arr[mid+1])
                s = mid +1;

            // else e = mid, If the middle element is greater than or equal to the next element, update the end index to mid
            else
                e = mid;

            mid = (s + e)/2;
        }

        // return the start index. When the loop exits (s >= e), s will be pointing to a peak element.
        return s;
    }
};