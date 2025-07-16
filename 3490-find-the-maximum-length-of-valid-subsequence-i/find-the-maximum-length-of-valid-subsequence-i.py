class Solution:
    def maximumLength(self, nums: List[int]) -> int:
        cnt_even = 0
        cnt_odd = 0
        alt_len = 1

        for i in range(len(nums)):
            if nums[i] % 2 == 0:
                cnt_even += 1
            else:
                cnt_odd += 1

            # For alternating pattern, check if current element differs from previous
            if i > 0 and nums[i] % 2 != nums[i-1] % 2:
                alt_len += 1

        return max(alt_len, cnt_even, cnt_odd)