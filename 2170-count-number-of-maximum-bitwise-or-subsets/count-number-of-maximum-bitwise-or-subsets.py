# class Solution:
#     def countMaxOrSubsets(self, nums: List[int]) -> int:
#         res = 0
#         ans = 0
#         n = len(nums)

#         for num in nums:
#             res |= num
        
#         subsets = [[nums[j] for j in range(n) if i & (1 << j)] for i in range(1 << n)]
#         for subset in subsets:
#             curr = 0
#             for num in subsets:
#                 curr |= num
            
#             if curr == res:
#                 ans += 1
        
#         return ans 

class Solution:
    def countMaxOrSubsets(self, nums: List[int]) -> int:
        res = 0
        ans = 0
        n = len(nums)
        for num in nums:
            res |= num
        subsets = [[nums[j] for j in range(n) if i & (1 << j)] for i in range(1 << n)]
        for subset in subsets:
            curr = 0
            for num in subset:
                curr |= num
            if curr == res:
                ans += 1
        return ans