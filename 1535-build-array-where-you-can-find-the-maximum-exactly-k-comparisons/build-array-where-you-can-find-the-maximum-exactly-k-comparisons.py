class Solution:
    def numOfArrays(self, n: int, m: int, k: int) -> int:
        
        @lru_cache(None)
        def dfs(i,y,k):
            if n-i < k: return 0
            if m-y < k: return 0
            if k == 0: return y**(n-i)
            return y*dfs(i+1,y,k) + dfs(i+1,y+1,k-1) + dfs(i,y+1,k) - (y+1)*dfs(i+1,y+1,k)

        return dfs(0,0,k)%(10**9+7)