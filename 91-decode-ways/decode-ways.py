class Solution:
    def numDecodings(self, s: str) -> int:
        n=len(s)
        dp={n:1}
        
        def f(i):
            if i in dp:
                return dp[i]
            if s[i]=='0':
                return 0
            x=f(i+1)
            if ( i+1<len(s) and (s[i]=='1' or (s[i]=='2' and s[i+1] in "0123456") )):
                x+=f(i+2)
            dp[i]=x
            return x
        return f(0)