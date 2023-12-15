class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        # collecting initial cities in set
        initCity = set()

        for p in paths:
            initCity.add(p[0])

        # collecting departure cities . 
        for p in paths:
            destCity = p[1]

            # return a city if not present in both. 
            if destCity not in initCity:
                return destCity

        return ""

        # time complexity:- o(N) -> for loop iteration
        # space complexity:- O(N) -> set storage sapace