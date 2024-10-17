Binomial Heap/ Binomial Queue/ Binomial Tree
Binary Tree -> Root max = 2 child min = 0
// Complete Binary  Tree( maximum = 2 child or minimum = 0 child) -> array
node = K =0
left child = 2K + 1 = 1
right child = 2K + 2 = 2*0 + 2 = 2
[1, 2, 3,5 ,4 ,14 ,142 , 42,5 , 421, 42, 42,7 , 42,8, , 24,10 ,4 ,11 , 10, 15,20]

Heap -> Max heap, Min Heap
Max Heap -> A[parent] >= A[i]
      50
      / \
     25  20
    / \  / \
   10  2 1  10
Min Heap => A[parent] <= A[i]

        1
       / \
      2   3
     / \  / \
    4   5 8  9  

Binomial Tree = B(K) = > 2^K = 1
B(0) = 1(single node)
B(1) = 2(double node)
B(2) = 4
B(3) = 8

Binomial Heap-> (Binomial Tree + Heap(Min Heap)) 
left -> Right
 
2 sub tree order(degree) same 
 
operation : operator
O() -> worst
1. Minimum key -> O(logn)
2. Insertion -> O(logn)
3. Deletion -> O(logn)
4. Union or Merge -> O(logn)

B1 & B2
B1 -> B10-B11-B13
B2 -> B20-B21-B22
B-> B10-B20-B11-B21-B22-B-13 => 6 subtress
// 25 12 13 1 52 89 15 14 523 785 95 10 253 45 n = 12-15
