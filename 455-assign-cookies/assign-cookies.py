class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        # Sort greed factors and cookie sizes
        g.sort()
        s.sort()

        # Initialize variables
        content_children = 0
        cookie_index = 0

        # Iterate through each child's greed factor
        for greed_factor in g:
            # Iterate through cookies until a suitable one is found or all cookies are exhausted
            while cookie_index < len(s) and s[cookie_index] < greed_factor:
                cookie_index += 1

            # If a suitable cookie was found, count the child as content
            if cookie_index < len(s):
                content_children += 1
                cookie_index += 1  # Move to the next cookie for the next child

        return content_children

# time complexity:- O(n log n) 
# space complexity:- O(n + log n)