class Solution:
	def minCost(self, colors: str, neededTime: List[int]) -> int:
		i=0
		s=0
		while i<len(colors):
			cnt=0
			su=0
			flag=False
			mn=-1
			while i<len(colors)-1 and colors[i]==colors[i+1]:
				flag=True
				mn=max(mn,neededTime[i])
				cnt+=1
				su+=neededTime[i]
				i+=1
			if flag:
				mn=max(mn,neededTime[i])
				su+=neededTime[i]
				s+=(su-mn)
			i+=1
		return s