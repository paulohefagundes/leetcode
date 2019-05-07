from algorithms.list_node import ListNode


class Solution(object):
    def hasCycle(self, head: ListNode) -> bool:
        """
        :type head: ListNode
        :rtype: bool
        """
        if not head or not head.next:
            return False
        slow = head
        fast = head.next

        while slow is not fast:
            if not fast or not fast.next:
                return False
            slow = slow.next
            fast = fast.next.next

        return True
