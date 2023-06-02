// The Fibonacci numbers are the numbers in the following integer sequence.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

// In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation:- Fn = Fn-1 + Fn-2

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> ans(n);
        
        ans[0] = ans[1] = 1;
        
        for(int i=2;i<n;++i){
            ans[i] = ans[i-1] + ans[i-2];
        }
        
        return ans;
    }
};

// time complexity :- O(n)
// space complexity:- O(1)
