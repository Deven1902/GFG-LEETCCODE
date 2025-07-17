class Solution:
    def maximumLength(self, nums: List[int], k: int) -> int:
        ans = 0
        for mod_target in range(k):
            dp = [0] * k
            for x in nums:
                mod = x % k
                required = (mod_target - mod + k) % k
                dp[mod] = max(dp[mod], dp[required] + 1)
                ans = max(ans, dp[mod])
        return ans