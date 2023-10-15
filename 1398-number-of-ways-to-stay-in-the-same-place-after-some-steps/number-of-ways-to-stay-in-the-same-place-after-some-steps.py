class Solution:
    def numWays(self, steps: int, arrLen: int) -> int:
        # DP. But can limit the range of motion, because you can't get back after you move away for stes / 2 steps.
        size = min(steps // 2 + 1, arrLen) # max number of positions can move to get back
        ways = [0, 1] + [0] * size # leave room on both sides, for positions -1 and size
        
        # iterates through each step. For each step, a new array new_ways is initialized with zeros.
        for step in range(steps):
            new_ways = [0] * len(ways)

            for i in range(1, size + 1):
                # new_ways[0] and new_ways[-1] are always 0 because they don't get updated; they're just here to cut 
                new_ways[i] = (ways[i] + ways[i-1] + ways[i+1]) % (10 ** 9 + 7)

            ways = new_ways
            
        return ways[1]