class Solution:
    def waysToSplitArray(self, nums: List[int]) -> int:
        total_sum = sum(nums)
      
        prefix_sum = 0
        split_count = 0
      
        for index, value in enumerate(nums[:-1]):   
            prefix_sum += value
          
            if prefix_sum >= total_sum - prefix_sum:
                split_count += 1
              
        return split_count
