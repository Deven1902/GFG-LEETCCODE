class Solution:
    def minOperations(self, nums: List[int]) -> int:
    
        N = len(nums)
        queue = deque()
        max_length = 1

        for num in sorted(set(nums)):
            while queue and num - queue[0] >= N:
                queue.popleft()

            queue.append(num)
            max_length = max(max_length, len(queue))

        return N - max_length


# Time complexity
# Sorting: O(NlogN)
# Loop: O(N)
# -> O(NlogN) 

# Space complexity:- O(n) -> maitains a queue of n elements. 