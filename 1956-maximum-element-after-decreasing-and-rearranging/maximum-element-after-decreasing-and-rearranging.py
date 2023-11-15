class Solution:
    def maximumElementAfterDecrementingAndRearranging(self, arr: List[int]) -> int:
        arr.sort()
        arr[0] = 1
        for i in range(1, len(arr)):
            if(arr[i] > arr[i-1] +1 ):
                arr[i] = arr[i-1]+1

        return arr[-1]

# Time complexity:- O(N log N)
# space complexity:- O(N), N +> length of the input array 