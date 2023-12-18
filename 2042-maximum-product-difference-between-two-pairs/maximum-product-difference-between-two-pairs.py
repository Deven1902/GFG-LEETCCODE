class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:

        sorted_nums = sorted(nums)
        w, x, y, z = sorted_nums[0], sorted_nums[1], sorted_nums[-2], sorted_nums[-1]
        return (y * z) - (w * x)
