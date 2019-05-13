Used for file system that forms a hierarchy

Entities involved:
1) Root node
2) Leaf nodes
3) Children
4) Balanced tree - equal height
5) Skewed tree - unbalanced
6) Height - no of edges from root node to the leaf node
7) Successor (next in the order)
8) Predecessor (previous in the order)

Rules of BST:
1) Left subtree contains values less than the parent node
2) Right subtree contains values that are greater than the parent node
3) It cannot have duplicates

Rules of finding successors:
1) Find the minimum value of the right subtree
2) If the right subtree does not exist, traverse the ancestors till the value is greater than the given key
   It would arise on the case when the child is the left subtree of the parent
3) For the maximum value, there exists no successor

Rules of finding predecessors:
1) Find the maximum value of the left subtree
2) If the left subtree does not exist, traverse the ancestors till the value is lesser than the given key
   It would arise on the case when the child is the right subtree of the parent
3) For the minimum value, there exists no predecessor

Rules of removing a node form the tree:
1) If it is a leaf node, directly remove
2) If the node has only one child, replace the node with the child
3) If the node has two children, replace it with the successor or the predecessor node

Applications:
1) Finding max, min key values