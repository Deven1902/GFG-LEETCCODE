class Solution:
    def numRollsToTarget(self, n: int, k: int, target: int) -> int:
        @cache
        def check(t,s):
            if t==0 and s==target:
                return 1
            elif t==0:
                return 0
            return sum([check(t-1,s+i) for i in range(1,k+1)])
        return check(n,0)%(10**9+7)