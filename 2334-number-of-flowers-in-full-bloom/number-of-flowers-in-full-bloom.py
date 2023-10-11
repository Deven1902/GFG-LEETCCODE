class Solution:
    def fullBloomFlowers(self, flowers: List[List[int]], people: List[int]) -> List[int]:
        """Calculates the number of flowers that are in full bloom at a given time.

        Args:
            flowers: A list of lists of integers, where each inner list contains the start and end times of a flower's bloom period.
            people: A list of integers, where each integer represents the time at which a person visits the garden.

        Returns:
            A list of integers, where each integer represents the number of flowers that are in full bloom at the time of the corresponding person's visit.
        """

        # Sort the start and end times of the flower bloom periods.
        start = sorted([f[0] for f in flowers])
        end = sorted([f[1] for f in flowers])

        # Calculate the number of flowers that are in full bloom at the time of each person's visit.
        ans = []
        for p in people:
            blommed_till_now = bisect.bisect_right(start, p)
            bloomed_till_off = bisect.bisect_left(end, p)
            ans.append(blommed_till_now - bloomed_till_off)

        return ans