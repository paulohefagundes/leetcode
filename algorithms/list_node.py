from typing import List


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


def make_list(values: List[int]) -> List[ListNode]:
    v = []
    for i, val in enumerate(values):
        v.append(ListNode(val))
        if i > 0:
            v[i - 1].next = v[i]
    return v


def same_values(head: ListNode, values: List[int]) -> bool:
    node = head
    for val in values:
        if node is None or node.val != val:
            return False
        node = node.next
    return True if node is None else False
