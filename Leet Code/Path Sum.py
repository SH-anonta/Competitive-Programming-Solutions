# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if root is None:
            return False

        return self._hasPathSum(root, targetSum, 0)
        
    def _hasPathSum(self, root, targetSum, currentSum):
        if root is None:
            return False

        if root.left is None and root.right is None:
            return currentSum + root.val == targetSum
        
        return self._hasPathSum(root.left, targetSum, currentSum + root.val) or self._hasPathSum(root.right, targetSum, currentSum + root.val)
            