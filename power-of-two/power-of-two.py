class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if(n==0):
            return False

        while(n%2==0):
            n/=2

        return n==1

        # time complexity :- O(log n) 

        # Space complexity :- O(n)