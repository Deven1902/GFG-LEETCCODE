class Solution:
    def shiftingLetters(self, s: str, shifts: List[List[int]]) -> str:
        n = len(s)
        
        difference = [0]
        for i in range(n-1):
            diff = (ord(s[i+1]) - ord(s[i])) % 26
            difference.append(diff)
        
        first_c = 0
        for shift in shifts:
            start = shift[0]
            end = shift[1]
            direction = shift[2]
            if start > 0 and direction == 1:
                difference[start] += 1 
                difference[start] %= 26
            if end < n-1 and direction == 1:
                difference[end+1] -= 1
                difference[end+1] %= 26
            if start > 0 and direction == 0:
                difference[start] -= 1
                difference[start] %= 26
            if end < n-1 and direction == 0:
                difference[end+1] += 1 
                difference[end+1] %= 26
            if start == 0 and direction == 1:
                first_c += 1 
                first_c %= 26
            if start == 0 and direction == 0:
                first_c -= 1
                first_c %= 26
        
        new_s = []
        new_first_c = ord(s[0]) + first_c
        if new_first_c > 122:
            new_first_c = new_first_c - 122 + 96
        new_s.append(chr(new_first_c))
        for i in range(1, n):
            new_ascii = ord(new_s[i-1]) + difference[i]
            if new_ascii > 122:
                new_ascii = new_ascii - 122 + 96
            new_s.append(chr(new_ascii))
        return "".join(new_s)