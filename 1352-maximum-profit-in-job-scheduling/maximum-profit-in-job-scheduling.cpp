// class Solution {
// public:
//     int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
//         int n = startTime.size();
//         vector<tuple<int, int, int>> jobs;
//         for (int i = 0; i < n; ++i) {
//             jobs.push_back({endTime[i], startTime[i], profit[i]});
//         }
//         sort(jobs.begin(), jobs.end());

//         int ans = INT_MIN;
//         for (int i = 0; i < n; ++i) {
//             int currProfit = get<2>(jobs[i]);
//             for (int j = 0; j < i; ++j) {
//                 if (get<0>(jobs[j]) <= get<1>(jobs[i])) { // if job j ends before or at the same time job i starts
//                     currProfit = max(currProfit, get<2>(jobs[j]) + get<2>(jobs[i]));
//                 }
//             }
//             ans = max(ans, currProfit);
//             get<2>(jobs[i]) = currProfit; // update the maximum profit after scheduling job i
//         }
//         return ans;
//     }
// }; 

class Solution {
public:
    int solve(int i, vector<int>& startTime, vector<int>& endTime, vector<int>& profit, vector<int> &dp){
        if(i == startTime.size()) return 0;
        if(dp[i] != -1) return dp[i];

        int ind = lower_bound(startTime.begin(), startTime.end(), endTime[i]) - startTime.begin();
        int take = profit[i] + solve(ind, startTime, endTime, profit, dp);
        int notTake = solve(i+1, startTime, endTime, profit, dp);

        return dp[i] = max(take, notTake);
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();

        set<pair<int, pair<int, int>>> st;
        for(int i=0; i<startTime.size(); i++){
            st.insert({startTime[i], {endTime[i], profit[i]}});
        }

        int i = 0;
        for(auto it: st){
            pair<int, pair<int, int>> p = it;
            startTime[i] = p.first;
            endTime[i] = p.second.first;
            profit[i] = p.second.second;

            i = i + 1;
        }


        vector<int> dp(n+1, -1);
        return solve(0, startTime, endTime, profit, dp);
    }
};