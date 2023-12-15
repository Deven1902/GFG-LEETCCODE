class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        initCity = set()

        for p in paths:
            initCity.add(p[0])

        for p in paths:
            destCity = p[1]

            if destCity not in initCity:
                return destCity

        return ""