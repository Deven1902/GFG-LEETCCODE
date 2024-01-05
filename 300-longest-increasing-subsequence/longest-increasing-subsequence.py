class Solution(object):
    def lengthOfLIS(self, A):
        """
        :type nums: List[int]
        :rtype: int
        """

        tail = []
        for i in A:
            j = bisect.bisect_left(tail,i)
            if j == len(tail): tail.append(i)
            else: tail[j] = i
        return len(tail)
        