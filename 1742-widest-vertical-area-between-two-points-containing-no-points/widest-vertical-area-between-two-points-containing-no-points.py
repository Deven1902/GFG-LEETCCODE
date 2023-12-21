class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        
        arr=sorted(x for x,y in points);max_dist=0
        for i in range(1,len(arr)):
            #finding distance between two points
            diff=arr[i]-arr[i-1]
            #if difference is max than current max_dist update it
            if max_dist<diff: max_dist=diff

        return max_dist