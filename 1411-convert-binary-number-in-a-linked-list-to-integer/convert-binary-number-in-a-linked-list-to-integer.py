# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: Optional[ListNode]) -> int:
        current_node = head
        linked_list_binary = ""
        while current_node:
            linked_list_binary += str(current_node.val)
            current_node = current_node.next
        linked_list_integer = int(linked_list_binary,2)
        return linked_list_integer
