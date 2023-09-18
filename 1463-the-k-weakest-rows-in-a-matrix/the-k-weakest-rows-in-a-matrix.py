#  sorting solution below

class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        # arr = [(sum(mat[i]), i) for i in range(len(mat))]

        # arr.sort()

        # return [arr[i][1] for i in range(k) ]

        # Binary Search solution -> alternative apporach

        ans = []

        for i in range(len(mat)):
            arr = mat[i]
            low = 0
            high = len(arr)-1
            temp_r = 0
            while low<=high:
                mid = (low+high)//2
                if arr[mid]==1:
                    temp_r = max(temp_r,mid+1)
                    low = mid+1
                else:
                    high = mid-1
            ans.append((temp_r,i))
        ans.sort(key = lambda x:x[0])
        a=[]
        for i in range(k):
            a.append(ans[i][1])
        return a
        