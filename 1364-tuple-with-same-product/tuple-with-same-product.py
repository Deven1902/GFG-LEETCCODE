class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        m = []
        # p = []
        v = 0
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                # p.append([nums[i],nums[j]])
                m.append(nums[i]*nums[j])

        c = dict(Counter(m))
        print(c)

        for key, value in (c.items()):
            # print(type(int(value)))
            if value >= 2:
                v += value * (value - 1) // 2

        return v*8