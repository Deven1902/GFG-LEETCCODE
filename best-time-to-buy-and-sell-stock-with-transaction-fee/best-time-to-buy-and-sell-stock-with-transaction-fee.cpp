class Solution {
public:

    int solve(vector<int>& prices, int fee, int index, int buy, vector<vector<int>>&dp) {
        if(index == prices.size()) return 0;
        if(dp[index][buy] != -1) return dp[index][buy];

        int profit = 0;

        if(buy) {
            int buy = -prices[index] + solve(prices, fee, index+1, 0, dp);
            int notBuy = 0 + solve(prices, fee, index+1, 1, dp);
            profit = max(buy, notBuy);
        }
        else {
            int sell = prices[index] - fee + solve(prices, fee, index+1, 1, dp);
            int notSell = 0 + solve(prices, fee, index+1, 0, dp);
            profit = max(sell, notSell);
        }

        return dp[index][buy] = profit;
    }
    int maxProfit(vector<int>& prices, int fee) {

        vector<vector<int>> dp(prices.size(), vector<int>(2,-1));
        return  solve(prices, fee, 0, 1, dp);
        
    }
};