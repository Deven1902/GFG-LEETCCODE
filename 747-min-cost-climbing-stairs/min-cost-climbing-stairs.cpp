class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i = cost.size();

        for(int j=2; j<i; j++) {
            cost[j] += min(cost[j - 1], cost[j-2]);
        }

        int res = min(cost[i-1], cost[i-2]);

        return res;
    }
};

// time complexity -> O(N)
// space complexity -> O(1)