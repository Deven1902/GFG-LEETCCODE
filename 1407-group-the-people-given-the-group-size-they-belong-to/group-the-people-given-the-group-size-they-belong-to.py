class Solution:
    def groupThePeople(self, groupS: List[int]) -> List[List[int]]:

        res = []
        cnt = collections.defaultdict(list)
        for i, num in enumerate(groupS):
            cnt[num].append(i)
        for key, value in cnt.items():
            if key == len(value):
                res.append(value)
            else:
                res.extend([value[i : i + key] for i in range(0, len(value), key)])
        return res
        