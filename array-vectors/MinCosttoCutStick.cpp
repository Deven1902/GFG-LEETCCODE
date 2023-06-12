/*
1547. Minimum Cost to Cut a Stick

problem Link:- https://leetcode.com/problems/minimum-cost-to-cut-a-stick/description/

Difficulty:- hard;

popular interview problem. 

topic:- arrays, dp, sorting. 
*/

class Solution {
public:
    int helper(int i, int j, vector<int> &cuts) {
        if(i>j) 
            return 0;

        long long mini = 1e9;

        for(int ind=i; ind<=j; ind++) {
            long long cost =  cuts[j+1] - cuts[i-1] + helper(i, ind-1,cuts) + helper(ind+1,j,cuts);

            mini = min(mini, cost);
        }

        return mini; 
    }
    

    int minCost(int n, vector<int>& cuts) {
        //write your code here. 

        cuts.insert(cuts.begin(),0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());

        return helper(1, cuts.size()-2, cuts);
    }
};
