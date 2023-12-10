class Solution:
    def transpose(self, mat: List[List[int]]) -> List[List[int]]:
        res = []
        n = len(mat[0])
        for i in range(n):
            res.append([row[i] for row in mat])
        return res