class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        cnt = 0
        for i in range(1, len(points)):
            cnt += max(abs(points[i-1][0] - points[i][0]), abs(points[i-1][1] - points[i][1]))

        return cnt

# time complexity:- O(N)
# space complexity:- O(N)