class Solution:
    def maxEvents(self, events: List[List[int]]) -> int:
        # events.sort()
        # used = [False] * 100001
        # count = 0
        # for s, e in events:
        #     for d in range(s, e + 1):
        #         if not used[d]:
        #             used[d] = True
        #             count += 1
        #             break
        # return count 

        # brute force went wrong. 

        # Heap solution. 

        heap=[]
        curr,count,i=0,0,0
        n=len(events)
        events.sort() # sort by start

        while i<n or heap:
            if not heap:
                # if no event in heap, move to next
                curr=events[i][0]

            while i<n and events[i][0]<=curr:
                heapq.heappush(heap,events[i][1]) # sort by end
                i+=1
            
            heapq.heappop(heap)
            count+=1
            curr+=1

            # remove expired days
            while heap and heap[0]<curr:
                heapq.heappop(heap)
        
        return count