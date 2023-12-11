class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        
        # find length of arr and store in a variable
        n = len(arr)  

        # quarter of length of arr is calculated and kept as an integer
        quarter = n // 4

        # loop iterates through the array indices from 0 to (n - quarter - 1) 
        # this checks that there are elements more than a quatrter to iterate for, if not return. 
        for i in range(n - quarter):

            # checks if the element is same as element 2 quarter steps ahead
            if arr[i] == arr[i + quarter]:
                
                # return ans
                return arr[i]