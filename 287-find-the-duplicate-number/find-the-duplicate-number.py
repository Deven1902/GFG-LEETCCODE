# task :- to find out the duplicate number between 1 to N

# used sorting apporach, can be done by Two pointers as well

# Apprpoach:- 
# 1) Sort the given array in ascending order.
# 2) Iterate through the sorted array.
# 3) Check if arr[i] is equal to arr[i+1]. If true, arr[i] is the duplicate number.

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:

        nums.sort()

        for i in range(1, len(nums)):
            if nums[i] == nums[i-1]:
                return nums[i]

        return -1