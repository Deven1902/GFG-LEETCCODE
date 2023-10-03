class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        
        # hash map solution

        hashMap = {}
        cnt = 0

        for n in nums:
            if n in hashMap:
                cnt = cnt + hashMap[n]
                hashMap[n] +=1

            else:
                hashMap[n] = 1

        return cnt