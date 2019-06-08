from typing import List


class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


def make_tree(nodes: List[int]) -> List[TreeNode]:
    v = []
    for n in nodes:
        v.append(TreeNode(n) if n is not None else None)

    size = len(v) - 1
    for i in range(len(v)):
        n = 2 * i + 1
        if n > size:
            break

        if v[i] is not None:
            v[i].left = v[n]
            n += 1
            if n > size:
                break
            v[i].right = v[n]

    return v
