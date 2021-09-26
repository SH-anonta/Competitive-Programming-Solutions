# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        if root is None:
            return []
        
        self.results = []
        
        self.search(root, [], targetSum)
        
        return self.results
            
    def search(self, root, values, target):
        if root.left is None and root.right is None:
            if target - root.val == 0:
                self.results.append([*values, root.val])
            return
        
        values.append(root.val)
        if root.left is not None:
            self.search(root.left, values, target - root.val)
        if root.right is not None:
            self.search(root.right, values, target - root.val)
        values.pop()