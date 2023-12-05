class Solution:
    def numberOfMatches(self, n: int) -> int:
        # code here
        
        ans = 0
        while n > 1:
            if n%2 != 0: # if no of teams is odd
                ans += int(n//2) 
                n = int(n//2) +1
            else:
                ans += int(n/2)
                n = int(n/2)
        return ans