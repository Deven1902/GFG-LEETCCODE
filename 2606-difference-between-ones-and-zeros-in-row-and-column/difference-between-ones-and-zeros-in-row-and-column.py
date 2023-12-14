class Solution:
    def onesMinusZeros(self, grid: List[List[int]]) -> List[List[int]]:
        m=len(grid)
        n=len(grid[0])
        diff=[[0]*n for _ in range(m)]
        r=[sum(i) for i in grid]
        c=[sum(k[i] for k in grid) for i in range(n)]
        x=m+n
        for i in range(m):
            for j in range(n):
                diff[i][j]=2*(r[i]+c[j])-x
        return diff