class Solution:
    def isPathCrossing(self, path: str) -> bool:
        visited = set()
        visited.add((0, 0))
        curr = (0, 0)
        for move in path:
            if move == 'N':
                curr = (curr[0], curr[1] + 1)
            elif move == 'S':
                curr = (curr[0], curr[1] - 1)
            elif move == 'E':
                curr = (curr[0] + 1, curr[1])
            elif move == 'W':
                curr = (curr[0] - 1, curr[1])
            if curr in visited:
                return True
            visited.add(curr)
        return False