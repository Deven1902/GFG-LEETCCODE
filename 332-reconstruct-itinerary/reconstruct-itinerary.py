class Solution:
    def findItinerary(self, tickets: List[List[str]]) -> List[str]:
        
        # code here 

        flights = defaultdict(list)
        for t in sorted(tickets, reverse=True):
            flights[t[0]].append(t[1])

        stack, result = [], []
        stop = "JFK"
        while stop:
            if not flights[stop]:
                result.append(stop)
                stop = None if not stack else stack.pop()
            else:
                stack.append(stop)
                stop = flights[stop].pop()
        return result[::-1]