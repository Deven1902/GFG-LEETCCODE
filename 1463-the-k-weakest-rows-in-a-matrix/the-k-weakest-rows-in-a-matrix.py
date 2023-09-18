#  sorting solution below

class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        arr = [(sum(mat[i]), i) for i in range(len(mat))]

        arr.sort()

        return [arr[i][1] for i in range(k) ]
        