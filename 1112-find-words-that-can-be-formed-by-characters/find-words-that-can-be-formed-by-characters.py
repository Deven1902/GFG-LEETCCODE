class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        
        words = [collections.Counter(word) for word in words]
        chars = collections.Counter(chars)
        return sum([sum(list(w.values())) for w in words if all([chars[i] >= w[i] for i in w])])