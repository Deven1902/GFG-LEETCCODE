class Solution:
    def reverseWords(self, s: str) -> str:
        
        r = ''
        l = 0

        for i in range(len(s)):
            if s[i]==" ":
                if l==0:
                    r = r+s[i-1::-1]
                else:
                    r = r+s[i-1:l:-1]

                r = r + " "
                l = i

        if l==0:
            return s[::-1]

        r = r + s[i:l:-1]

        return r