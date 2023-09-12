class Solution:
    def minDeletions(self, s: str) -> int:
        
        d = Counter(s)
        ans = 0
        seen = set()
        for k, v in d.items():
            while v and v in seen:
                ans += 1
                v -= 1
            seen.add(v)
        return ans