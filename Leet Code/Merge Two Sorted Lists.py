# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, a, b):
        if a is None:
            return b
        if b is None:
            return a
        
        if a.val > b.val:
            a, b = b, a
            
        result = a
        result_head = result
        a = a.next
        
        while a is not None or b is not None:
            a_val = a.val if a is not None else math.inf
            b_val = b.val if b is not None else math.inf
            
            if a_val < b_val:
                result.next = a
                a = a.next
            else:
                result.next = b
                b = b.next
                
            result = result.next
            
        return result_head
            