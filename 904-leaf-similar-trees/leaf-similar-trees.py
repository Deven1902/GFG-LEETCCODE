# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def dfs(root):
            if not root: return []

            if not root.left and not root.right:
                return [root.val]

            return dfs(root.left) + dfs(root.right) 

        return dfs(root1) == dfs(root2) 

# time complexity:- O(N), where N is the total number of nodes in both trees. 

# space complexity:- O(H), H is the height of th  tree, the height of tree =  the depth of the memory call stack. 