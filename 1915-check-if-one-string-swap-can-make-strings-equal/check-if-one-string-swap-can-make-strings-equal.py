class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        if len(s1) != len(s2):
            return False
        
        if Counter(s1) - Counter(s2):
            return False
        pos = defaultdict(list)

        for i in range(len(s1)):
            if s1[i] != s2[i]:
                pos[s1[i]].append(i)
                pos[s2[i]].append(i)
        
        if len(pos) > 2:
            return False
        
        for k,v in pos.items():
            if len(v) != 2:
                return False
        return True