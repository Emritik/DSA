RB Trees(Red Black Trees)
Properties :
1. Node color: each node is either black or red.
2. Root color: The root of the is always black.
3. Red property: Red node cannot have red children (no two consective red nodes on any path).
4. Black property: Every path from a  node to its desecendant null nodes has the same no. of black nodes.
5. Leaf property: All leaf nodes are black.

Operations in RB tree-> 
1. Traversing
2. Searching -> O(logn)
3. Insertion -> O(logn)
4. Deletion -> O(logn)

comparison btw AVL tree and RB tree
1. AVL tree is more balanced then RB tree.
2. AVL tree have more rotations then RB tree during insertion or deletion.
3. Rapid insertion or radip deletion  -> RB tree.

1. Insertion: 2steps
a. Insertion in the tree like BST.
b. Fixing the tree to satisfy the properties of RB tree.(Violation(BST + RB Tree))

    Fixing Violation during insertion: 

    case 1: Uncle is Red: Recolor the parent and uncle to black and the grandparent to red.
    Case 2: Uncle is Black: 
        subcase 1: Node is a right child: Perform a left rotation on the parent.
        subcase 2: Node is a left child: perform a right rotation on the grandparent and recolor appropriately.