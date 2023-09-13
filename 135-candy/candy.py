class Solution:
    def candy(self, ratings: List[int]) -> int:

        #  if we have  a higher rating on the next child, then give it one more candy. 

        n = len(ratings)
        give = [1] * n

        for i in range(1, n):
            if ratings[i] > ratings[i-1]:
                give[i] = give[i-1] + 1

        for i in range(n-2, -1, -1):
            if ratings[i] > ratings[i+1] and give[i] <= give[i+1]:
                give[i] = give[i+1] + 1

        return sum(give)

# time complexity:- O(n) 
    # since parsing the whole array. 

# space complexity:- O(n) 
    # deu to the new array of give. 