class Solution:
    def countPalindromicSubsequence(self, s: str) -> int:
        # code here
        if len(s) < 3:
            return 0

        elif len(s) == 3:
            return 1 if s[0]==s[2] else 0
                
        else:
            numPalin = 0
            unique = list(set(s))
            for char in unique:
                cnt = s.count(char)
                if cnt > 1:
                    # find first and last index of char in s
                    a_index = s.index(char)
                    c_index = s.rindex(char)
                    # find num of unique chars between the two indeces 
                    between = s[a_index+1:c_index]
                    numPalin += len(list(set(between)))
                
            return numPalin