class Solution:
	def longestStrChain(self, words: List[str]) -> int:
		
		# code here
		hash_map = {}
		words = sorted(words , key = len)

		for word in words:
			hash_map[word] = 1

			for index in range(len(word)):

				successor = word[:index] + word[index + 1:]

				if successor in hash_map:
					hash_map[word] = max(hash_map[word] , hash_map[successor] + 1)

		return max(hash_map.values())

		# time Complexity:- O(nk)
		# space Complexity:- O(n)