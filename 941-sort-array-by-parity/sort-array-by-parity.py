# 2 pointer appraoch :- Whenever we encounter odd element at start we swap it with even element at the end side of the array.

# Method

# 1. Even Pointer at start of Array.
# 2. Odd pointer at end of array.
# 3. If Even pointer element is even we increase even pointer by 1.
# 4. If Even pointer element is odd, then we check for odd pointer element.
# 5. If odd pointer element is odd, we decrease odd pointer by 1.
# 6. If odd pointer element is even, we SWAP even pointer and odd pointer elements. Increase even pointer by 1 and decrease odd pointer by 1.
# 7. Use a While loop which will run until even pointer is smaller than odd pointer.

    
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
