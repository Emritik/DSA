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
    case 2: Uncle is Black: 
        subcase 1: Node is a right child: Perform a left rotation on the parent.
        subcase 2: Node is a left child: perform a right rotation on the grandparent and recolor appropriately.

2. Rotations: 
    1. Left Rotation
    2. Right Rotation

    1. Left Rotation: Before Rotation-> 
                                x
                                 \
                                  y
                                 / \
                                a   b

                     After Rotation:
                                y
                               / \
                              x   b
                               \
                                a
    
    2. Right Rotation: Before Rotation->
                                x
                               / 
                              y   
                             / \
                            a   b
                        After Rotation
                              y
                             / \
                            a   x
                               /
                              b

3. Deletion: 2 steps
    a. BST Deletion: Remove the node using standard BST Rule.
    b. Fixing the tree to satisfy the properties of RB tree.(Violation(BST + RB Tree))

    fixing Violations During deletion: 
    Case 1: sibling is Red: Rotate the parent and recolor the sibling and parent.
    Case 2: Sibling is Black:
        Sub-case 1: Sibling's children are black: Recolor the sibling and propagate the double black upward.
        Sub-case 2: At least one of the sibling's children is red.
                                