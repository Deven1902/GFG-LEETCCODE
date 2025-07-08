class Solution:
    def maxValue(self, events: List[List[int]], k: int) -> int:
        # events.sort()
        # n = len(events)
        # @cache
        # def dp(index, startTime, k):
        #     if index == n or k == 0:
        #         return 0
        #     #can take event or skip event
        #     ans = dp(index+1, startTime, k)
        #     if events[index][0] >= startTime and k > 0:
        #         ans = max(ans, events[index][2] + dp(index+1, events[index][1]+1, k-1))
        #     return ans
        # return dp(0, 0, k) 

        # top down brute force gave a TLE. 


        n = len(events)
        events.sort()
        starts = []
        for i in range(n):
            starts.append(events[i][0])

        memo = {}
        def helper(i, k):
            # base case
            if k == 0 or i == n:
                return 0
            
            if (i, k) in memo:
                return memo[(i, k)]
            
            # find next event's start time
            next_ = bisect_right(starts, events[i][1])
            # count this event or pass this event. 
            memo[(i, k)] = max(helper(i + 1, k), events[i][2] + helper(next_, k - 1))
            return memo[(i, k)]
        
        return helper(0, k)

        # time complexity: O(n logn)
        # space complexity: O(n)