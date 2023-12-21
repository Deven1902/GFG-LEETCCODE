class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        # extracting x-cordinates from the points and sortng them 
        arr=sorted(x for x,y in points)
        # initializing maximum distance:
        maxDist=0

        # iterates through the sorted x-coordinates, starting from the second element (index 1) up to the last element.
        for i in range(1,len(arr)):

            # finding distance between two points
            # represents the width of the potential vertical area 
            diff=arr[i]-arr[i-1]

            # if difference is max than current max_dist update it
            
            if maxDist < diff: 
                maxDist = diff

        # returns the largest distance found
        return maxDist

# time complexity of O(n log n) 
# space complexity of O(n)