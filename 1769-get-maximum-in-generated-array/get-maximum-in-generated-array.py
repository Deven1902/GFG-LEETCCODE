class Solution:
    def getMaximumGenerated(self, n: int) -> int:
        a = []

        for i in range (n+1):
            if i == 0:
                a.append(0)
            elif i == 1:
                a.append(1) 
            elif i%2==0: 
                a.append(a[i//2])
            else: 
                a.append(a[i//2] + a[(i//2) + 1]) 

        return max(a)