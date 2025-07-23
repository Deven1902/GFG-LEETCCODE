class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        s1 = ""
        m1 = 0
        m2 = 0
        s2 = ""
        c1 = 0
        c = 0
        ans = 0
        pair = []
        if x >= y:
            m1 = x
            m2 = y
            s1 = "ab"
            s2 = "ba"
        else:
            m2 = x
            m1 = y
            s1 = "ba"
            s2 = "ab"

        l = list(s)
        
        i = 0
        while i < len(l) - 1:
            if l[i] + l[i + 1] == s1:
                ans += m1
                del l[i:i + 2]
                if i > 0:
                    i -= 1  
            else:
                i += 1

        i = 0
        while i < len(l) - 1:
            if l[i] + l[i + 1] == s2:
                ans += m2
                del l[i:i + 2]
                if i > 0:
                    i -= 1  
            else:
                i += 1


        return ans