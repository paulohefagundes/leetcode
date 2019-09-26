from algorithms.tree_node import make_tree, TreeNode


def test_make_tree1():
    v = make_tree([6, 2, 8, 0, 4, 7, 9, -1, -1, 3, 5])
    s0 = TreeNode(6)
    s1 = TreeNode(2)
    s2 = TreeNode(8)
    s3 = TreeNode(0)
    s4 = TreeNode(4)
    s5 = TreeNode(7)
    s6 = TreeNode(9)
    s7 = TreeNode(-1)
    s8 = TreeNode(-1)
    s9 = TreeNode(3)
    s10 = TreeNode(5)

    s0.left = s1
    s0.right = s2
    s1.left = s3
    s1.right = s4
    s2.left = s5
    s2.right = s6
    s3.left = s7
    s3.right = s8
    s4.left = s9
    s4.right = s10

    assert len(v) == 11
    assert v[0].val == s0.val
    assert v[1].val == s1.val
    assert v[2].val == s2.val
    assert v[3].val == s3.val
    assert v[4].val == s4.val
    assert v[5].val == s5.val
    assert v[6].val == s6.val
    assert v[7].val == s7.val
    assert v[8].val == s8.val
    assert v[9].val == s9.val
    assert v[10].val == s10.val


def test_make_tree2():
    v = make_tree([6, 2, 8, 0, 4, 7, 9, None, None, 3, 5])
    s0 = TreeNode(6)
    s1 = TreeNode(2)
    s2 = TreeNode(8)
    s3 = TreeNode(0)
    s4 = TreeNode(4)
    s5 = TreeNode(7)
    s6 = TreeNode(9)
    s9 = TreeNode(3)
    s10 = TreeNode(5)

    s0.left = s1
    s0.right = s2
    s1.left = s3
    s1.right = s4
    s2.left = s5
    s2.right = s6
    s4.left = s9
    s4.right = s10

    assert len(v) == 11
    assert v[0].val == s0.val
    assert v[1].val == s1.val
    assert v[2].val == s2.val
    assert v[3].val == s3.val
    assert v[4].val == s4.val
    assert v[5].val == s5.val
    assert v[6].val == s6.val
    assert v[3].left is None
    assert v[3].right is None
    assert v[9].val == s9.val
    assert v[10].val == s10.val
