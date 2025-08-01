class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        out = [[1]]
        for i in range(numRows - 1):
            toAdd = []
            last = [0] + out[-1] + [0]
            for j in range(len(last) - 1):
                toAdd.append(last[j] + last[j + 1])
            out.append(toAdd)
        return out