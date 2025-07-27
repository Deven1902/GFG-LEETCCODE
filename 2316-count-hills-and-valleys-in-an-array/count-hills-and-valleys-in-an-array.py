class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        n = len(nums)
        hills = 0
        valleys = 0

        def find_closest_non_equal_left(i :int, val: int):
            while (i > 0 and nums[i] == val):
                i -= 1
            return nums[i]

        def find_closest_non_equal_right(j: int, val: int):
            while (j < n-1 and nums[j] == val):
                j += 1
            return nums[j]

        for i in range(1, n-1):
            if nums[i-1] == nums[i]: continue
            l = find_closest_non_equal_left(i, nums[i])
            r = find_closest_non_equal_right(i, nums[i])
            if nums[i] > min(l, r) and nums[i] < max(l, r):
                continue
            if nums[i] > max(l, r):
                hills += 1
            elif nums[i] < min(l, r):
                valleys += 1

        return hills + valleys