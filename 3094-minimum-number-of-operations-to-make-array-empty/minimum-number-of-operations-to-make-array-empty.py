class Solution:
    def minOperations(self, nums: List[int]) -> int:
        result = 0
        count = {}
        for i in nums:
            if i not in count:
                count[i] = 1
            else:
                count[i] += 1
        print(count)
        for key, values in count.items():
            if values == 1:
                return -1
            else:
                if values%3 == 0:
                    result += values//3
                else:
                    result += values//3 + 1
        return result


        