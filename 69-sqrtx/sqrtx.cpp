// solved the square root problem using binary search. 

// technique:- reducing the search space to solve in log n time. 

class Solution {
public:
    int mySqrt(int x) {
        int s=0, e=x; //mid = s + (e-s)/2;
        int ans = -1;
        long long mid = s + (e-s)/2;

        while(s<=e) {
            // mid can be ans -> check
            if(mid*mid == x) return mid; 

            else if(mid*mid < x) {
                // store ans -> store ans for all the elements who can be less than the actual sqrt/  
                ans = mid;
                // move to right
                s = mid +1;
            }

            else {
                // move to left
                e = mid -1;
            }

            // update mid before going for next iteration of loop. 
            mid = s + (e-s)/2;
        }
        return ans; 
    }
};

// time xomplexity:- O(log n) -> This is because, in each iteration, the search space is divided by half.

// space compelxity:- O(1) -> constant. 