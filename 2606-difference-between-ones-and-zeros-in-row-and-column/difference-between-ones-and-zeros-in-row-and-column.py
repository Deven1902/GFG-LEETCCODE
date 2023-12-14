class Solution:
    def onesMinusZeros(self, grid: List[List[int]]) -> List[List[int]]:
        m = len(grid)  # Number of rows
        n = len(grid[0])  # Number of columns
        diff = [[0] * n for _ in range(m)]  # Initialize difference matrix with zeros
        r = [sum(i) for i in grid]  # List containing number of ones in each row
        c = [sum(k[i] for k in grid) for i in range(n)]  # List containing number of ones in each column
        x = m + n  # Total number of cells in the grid

        for i in range(m):
            for j in range(n):
                diff[i][j] = 2 * (r[i] + c[j]) - x  # Calculate difference for each cell

        return diff

# time complexity:- O(mn) 
# space complexity:- O(m+n)