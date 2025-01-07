class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        res = []
        for i in range(len(words)):
            check = False 
            for word in words:
                if words[i] != word:
                    if words[i] in word:
                        res.append(words[i])
                        break;

        return res