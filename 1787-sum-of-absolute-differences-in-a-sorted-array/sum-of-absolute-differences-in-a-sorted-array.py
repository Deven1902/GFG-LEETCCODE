class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        n = len(nums)
        sumBelow, sumAbove = 0, sum(nums)
        result = []
        
        for i, num in enumerate(nums):
            sumAbove -= num
            result.append(sumAbove - (n - 1 - i) * num + i * num - sumBelow)
            sumBelow += num

        return result