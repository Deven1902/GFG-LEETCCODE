class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        
        i,j=0,0
        m=len(s)
        n=len(t)

        while(i<m and j<n):
            if s[i]==t[j]:
                i+=1
                j+=1            
            
            else:
                j+=1

        if i==len(s):
            return True
        
        else:
            return False

# time complexity:- O(n)
# space complexity:- O(1)