class Solution:
    def champagneTower(self, poured: int, query_row: int, query_glass: int) -> float:
        dp = [0]*101
        dp[0] = poured
        for i in range(query_row):
            new_dp = [0]*101
            for j in range(i+1):
                if dp[j]>1:
                    new_dp[j] += (dp[j]-1)/2.
                    new_dp[j+1] += (dp[j]-1)/2.
            dp = new_dp[:]
        return min(1, dp[query_glass])