class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        ans=0
        for word in words:
            for ch in word:
                if word.count(ch)>chars.count(ch):
                    break
            else:
                ans+=len(word)
        
        return ans