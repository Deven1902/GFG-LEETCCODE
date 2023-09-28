class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        
        even = 0
        odd = len(nums) -1

        while even<odd:
            if nums[even]%2==0:
                even +=1

            else:
                if nums[odd] %2 !=0:
                    odd -=1
                
                else:
                    nums[even], nums[odd] = nums[odd], nums[even]
                    even+=1
                    odd -=1

        return nums

# time complexity:- O(n) 
# space complexity:- O(1) 
