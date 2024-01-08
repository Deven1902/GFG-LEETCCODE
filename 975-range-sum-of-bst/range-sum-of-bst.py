# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        
        # using preorder traversal 

        # just traverse the tree and then increment sum using recurssion.  

        ans = 0

        def preOrder(r, l, h):
            nonlocal ans
            if not r: 
                return
            
            if l<=r.val<=h:
                ans +=r.val

            preOrder(r.left, l, h)
            preOrder(r.right, l, h) 

        preOrder(root, low, high)

        return ans

# time complexity:- O(n) 
# space complexity:- O(H) -> h = height of the bst