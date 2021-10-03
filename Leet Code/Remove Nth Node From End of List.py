# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        l = head
        lp = None
        r = head

        i = n - 1
        while i:
            r = r.next
            i -= 1
        
        while r.next is not None:
            r = r.next
            lp = l
            l = l.next
            
        if l is head:
            return head.next
        
        if lp is not None:
            lp.next = l.next
        
        return head
        
        
