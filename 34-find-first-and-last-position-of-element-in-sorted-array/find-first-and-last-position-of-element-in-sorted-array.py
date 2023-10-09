# Apporach:- 

# initialize 2 vars First and Last to -1. 

# iterate throguh array -> if element matches target, then set first to the index of the matched elememtn. 
#                       -> update the last to current index. 

# return result (values of first and last). 

class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        f = -1 # initialize first to -1
        l = -1 # initialize last to -1

        # iteragte through array.
        for i in range(len(nums)):
            if nums[i] == target:
                if f == -1:
                    # first occurance 
                    f = i 
                
                # update last occurence
                l = i  

        # return res
        return [f, l] 

# time complexity:- O(n)
# space complexigty:- O(1)
