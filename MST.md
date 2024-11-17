Travesing-> DFS/BFS, MST-> Minimum Spanning Tree, Shortest Path
Undirected Connected Graphs
MST-> 
    a
    | \ 1
  10|  c 
    | / 5
    b
    MST => 16

    a
     \ 1
      c  MST => 6   
     / 5
    b
    MST => 6
MST -> Prim's (Dense Graph) & Kruskal's  (Sparse graphs)
// Greedy Approach -> 
ALgo 1: Kruskal's Algorithm: 

Step 1: Sort All the edges in increasing order of their weigth.# (a,c),(b,c),(a,b)
step 2:      set      |        Pair's
    1.    {a},{b},{c} |         Null
    2.     {a,c},{b}  |        {(a,c)}
    3.      {a,b,c}   |       {(a,c),(b,c)}
step 3: Repeat step 2 until the V-1 edges.

Algo 2: Prim's Algorithm:

step 1: Select a starting vertex.
step 2: Create a set of all adjacent vertices of the starting vertex.
step 3: select an edge 'e' connecting the tree vertex and insert into the priortiy Queue.
step 4: Add the selected edge into the MST.
step 5: exit Loop


example -> 
edges-> A,B,C
Starting Point (Source) => A -> [c]
A -> C -> [B]
A->C->B ->[Null]

A -> C -> B MST => 6

GreedY, Bp, DP