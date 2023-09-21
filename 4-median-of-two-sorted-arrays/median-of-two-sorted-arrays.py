class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        i = 0
        j = 0

        len1 = len(nums1)
        len2 = len(nums2)
        newList = list()

        while i < len1 and j < len2:
            if nums1[i] < nums2[j]:
                newList.append(nums1[i])
                i += 1
            else:
                newList.append(nums2[j])
                j += 1

        while i < len1:
            newList.append(nums1[i])
            i += 1
        
        while j < len2:
            newList.append(nums2[j])
            j += 1


        if len(newList)%2 == 0:
            idx1 = len(newList) / 2  - 1
            idx2 = len(newList) / 2 
            return (newList[int(idx1)] + newList[int(idx2)]) / 2
        else:
            idx = (len(newList) + 1) / 2 - 1
            return newList[int(idx)]
