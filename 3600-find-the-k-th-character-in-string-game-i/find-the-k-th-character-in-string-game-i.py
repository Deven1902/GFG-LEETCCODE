class Solution:
    def kthCharacter(self, k: int) -> str:
        stri = 'a'
        for i in range(k):
            stri1 = ""
            for j in range(len(stri)):
                if len(stri) > k:
                    continue
                a = stri[j]
                if stri[j] == 'z':
                    b = 'a'
                else:
                    b = chr(ord(a)+1)
                stri1 += b
            stri +=stri1
            if len(stri)>k:
                continue
        print(len(stri))
        return stri[k-1]   