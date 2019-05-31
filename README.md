# leetcode

this repository contains my solutions for [leetcode problems]

## build

``` shell
# install python dependencies
python3 -m pip install --upgrade -r requirements.txt

# build
mkdir build
cd build
conan install .. --build outdated # installs conan dependencies
cmake ..                          # configure cmake
cmake --build .                   # build
cmake --build . --target test     # run tests
```

## leetcode algorithms

| #  | Title | Solution | Difficulty | Type |
|----| ----- | -------- | ---------- | ---- |
|0001|[Two Sum](https://leetcode.com/problems/two-sum/)|[C++](algorithms/0001_two_sum.cpp), [Python](algorithms/0001_two_sum.py)|Easy|Array|
|0003|[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)||Medium|String|
|0005|[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)||Medium|String|
|0011|[Container With Most Water](https://leetcode.com/problems/container-with-most-water/)||Medium|Array|
|0015|[3Sum](https://leetcode.com/problems/3sum/)||Medium|Array|
|0019|[Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)||Medium|Linked List|
|0020|[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)|[C++](algorithms/0020_valid_parentheses.cpp), [Python](algorithms/0020_valid_parentheses.py)|Easy|String|
|0021|[Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)|[C++](algorithms/0021_merge_two_sorted_lists.cpp), [Python](algorithms/0021_merge_two_sorted_lists.py)|Easy|Linked List|
|0023|[Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)||Hard|Linked List,Heap|
|0033|[Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)||Medium|Array|
|0048|[Rotate Image](https://leetcode.com/problems/rotate-image/)||Medium|Matrix|
|0049|[Group Anagrams](https://leetcode.com/problems/group-anagrams/)||Medium|String|
|0053|[Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)|[C++](algorithms/0053_maximum_subarray.cpp), [Python](algorithms/0053_maximum_subarray.py)|Easy|Array|
|0054|[Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)||Medium|Matrix|
|0055|[Jump Game](https://leetcode.com/problems/jump-game/)||Medium|DP|
|0056|[Merge Intervals](https://leetcode.com/problems/merge-intervals/)||Medium|Interval|
|0057|[Insert Interval](https://leetcode.com/problems/insert-interval/)||Medium|Interval|
|0062|[Unique Paths](https://leetcode.com/problems/unique-paths/)||Medium|DP|
|0070|[Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)|[C++](algorithms/0070_climbing_stairs.cpp), [Python](algorithms/0070_climbing_stairs.py)|Easy|DP|
|0073|[Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)||Medium|Matrix|
|0076|[Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)||Hard|String|
|0079|[Word Search](https://leetcode.com/problems/word-search/)||Medium|Matrix|
|0091|[Decode Ways](https://leetcode.com/problems/decode-ways/)||Medium|DP|
|0098|[Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)||Medium|Tree|
|0100|[Same Tree](https://leetcode.com/problems/same-tree/)|[C++](algorithms/0100_same_tree.cpp), [Python](algorithms/0100_same_tree.py)|Easy|Tree|
|0102|[Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)||Medium|Tree|
|0104|[Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)|[C++](algorithms/0104_maximum_depth_of_binary_tree.cpp), [Python](algorithms/0104_maximum_depth_of_binary_tree.py)|Easy|Tree|
|0105|[Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)||Medium|Tree|
|0121|[Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)|[C++](algorithms/0121_best_time_to_buy_and_sell_stock.cpp), [Python](algorithms/0121_best_time_to_buy_and_sell_stock.py)|Easy|Array|
|0124|[Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)||Hard|Tree|
|0125|[Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)|[C++](algorithms/0125_valid_palindrome.cpp), [Python](algorithms/0125_valid_palindrome.py)|Easy|String|
|0128|[Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)||Hard|Graph|
|0133|[Clone Graph](https://leetcode.com/problems/clone-graph/)||Medium|Graph|
|0139|[Word Break](https://leetcode.com/problems/word-break/)||Medium|DP|
|0141|[Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)|[C++](algorithms/0141_linked_list_cycle.cpp), [Python](algorithms/0141_linked_list_cycle.py)|Easy|Linked List|
|0143|[Reorder List](https://leetcode.com/problems/reorder-list/)||Medium|Linked List|
|0152|[Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)||Medium|Array|
|0153|[Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)||Medium|Array|
|0190|[Reverse Bits](https://leetcode.com/problems/reverse-bits/)|[C++](algorithms/0190_reverse_bits.cpp), [Python](algorithms/0190_reverse_bits.py)|Easy|Binary|
|0191|[Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)|[C++](algorithms/0191_number_of_1_bits.cpp), [Python](algorithms/0191_number_of_1_bits.py)|Easy|Binary|
|0198|[House Robber](https://leetcode.com/problems/house-robber/)||Easy|DP|
|0200|[Number of Islands](https://leetcode.com/problems/number-of-islands/)||Medium|Graph|
|0206|[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)|[C++](algorithms/0206_reverse_linked_list.cpp), [Python](algorithms/0206_reverse_linked_list.py)|Easy|Linked List|
|0207|[Couse Schedule](https://leetcode.com/problems/course-schedule/)||Medium|Graph|
|0208|[Implement Trie (PrefixTree)](https://leetcode.com/problems/implement-trie-prefix-tree/)||Medium|Tree|
|0211|[Add and Search Word](https://leetcode.com/problems/add-and-search-word-data-structure-design/)||Medium|Tree|
|0212|[Word Search II](https://leetcode.com/problems/word-search-ii/)||Hard|Tree|
|0213|[House Robber II](https://leetcode.com/problems/house-robber-ii/)||Medium|DP|
|0217|[Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)|[C++](algorithms/0217_contains_duplicate.cpp), [Python](algorithms/0217_contains_duplicate.py)|Easy|Array|
|0226|[Invert BinaryTree](https://leetcode.com/problems/invert-binary-tree/)|[C++](algorithms/0226_invert_binary_tree.cpp), [Python](algorithms/0226_invert_binary_tree.py)|Easy|Tree|
|0230|[Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)||Medium|Tree|
|0235|[Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)||Easy|Tree|
|0238|[Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)||Medium|Array|
|0242|[Valid Anagram](https://leetcode.com/problems/valid-anagram/)||Easy|String|
|0268|[Missing Number](https://leetcode.com/problems/missing-number/)||Easy|Binary|
|0295|[Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)||Hard|Heap|
|0297|[Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)||Hard|Tree|
|0300|[Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)||Medium|DP|
|0332|[Coin Change](https://leetcode.com/problems/coin-change/)||Medium|DP|
|0338|[Counting Bits](https://leetcode.com/problems/counting-bits/)||Medium|Binary|
|0347|[Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)||Medium|Heap|
|0371|[Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/)||Easy|Binary|
|0377|[Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/)||Medium|DP|
|0417|[Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)||Medium|Graph|
|0424|[Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)||Medium|String|
|0435|[Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/)||Medium|Interval|
|0461|[Hamming Distance](https://leetcode.com/problems/hamming-distance/)|[C++](algorithms/0461_hamming_distance.cpp), [Python](algorithms/0461_hamming_distance.py)|Easy|Binary|
|0476|[Number Complement](https://leetcode.com/problems/number-complement)|[C++](algorithms/0476_number_complement.cpp), [Python](algorithms/0476_number_complement.py)|Easy|Binary|
|0500|[Keyboard Row](https://leetcode.com/problems/keyboard-row)|[C++](algorithms/0500_keyboard_row.cpp)|Easy|
|0535|[Encode and Decode TinyURL](https://leetcode.com/problems/encode-and-decode-tinyurl)|[C++](algorithms/0535_tiny_url.cpp), [Ruby](algorithms/0535_tiny_url.rb)|Medium|Design|
|0561|[Array Partition I](https://leetcode.com/problems/array-partition-i)|[C++](algorithms/0561_array_partition_i.cpp), [Python](algorithms/0561_array_partition_i.py)|Easy|Array|
|0572|[Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)||Easy|Tree|
|0617|[Merge Two Binary Trees](https://leetcode.com/problems/merge-two-binary-trees)|[C++](algorithms/0617_merge_two_binary_trees.cpp)|Easy|Tree|
|0647|[Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/)||Medium|String|
|9999|[Alien Dictionary](https://leetcode.com/problems/alien-dictionary/)|||Graph|
|9999|[Encode and Decode Strings](https://leetcode.com/problems/encode-and-decode-strings/)|||String|
|9999|[Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/)|||Graph|
|9999|[Meeting Rooms](https://leetcode.com/problems/meeting-rooms/)|||Interval|
|9999|[Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)|||Interval|
|9999|[Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)|||Graph|

<!-- links -->
[leetcode problems]: https://leetcode.com/problemset/all/
