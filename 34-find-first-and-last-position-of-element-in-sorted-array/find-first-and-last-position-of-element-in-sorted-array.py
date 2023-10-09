class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        f = -1
        l = -1

        for i in range(len(nums)):
            if nums[i] == target:
                if f == -1:
                    f = i

                l = i

        return [f, l]