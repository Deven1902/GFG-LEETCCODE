class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        mapper=collections.defaultdict(int)
        for n in nums:
            mapper[n]+=1
        for m in mapper:
            if mapper[m]==1:
                return m