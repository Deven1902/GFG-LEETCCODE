class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        ans=[]
        count=Counter(nums)
        while count:
            val=[]
            drop=[]
            for k,v in count.items():
                val.append(k)
                count[k]-=1
                if count[k]==0:
                    drop.append(k)

            for k in drop:
                count.pop(k)

            ans.append(val)

        return ans                