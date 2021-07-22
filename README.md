# Data structures in C

## Array
A data structure consisting of a collection of elements (values or variables), each identified by at least one array index or key. ([Wikipedia](https://en.wikipedia.org/wiki/Array_data_structure))

```
   --+---+---+---+--
     | 3 | 2 | 4 |
   --+---+---+---+--
```

## Linked list
Blocks of data and an address of (a reference, or a *link*, to) next block. Or each element points to the next element. The block, in this context, is called *Node*.

```
   +---+    +---+    +---+
   | 3 | -> | 2 | -> | 4 |
   +---+    +---+    +---+
```

## Stack
A list with the restruction that insertion and deletion can be performed only from one end, called the top. This also is called Last-In-First-Out (LIFO) data structure.

### Operations
* `Push(x)` to add an element to stack
* `Pop()` to remove a top (or the latest added) element from stack
* `Top()` to get a top element from the stack
* `IsEmpty()` to check if stack is empty

all of the operations take constant time or O(1)

```
   |   |
   +---+
   | 4 |
   +---+
   | 2 |
   +---+
   | 3 |
   +---+
```

### Use case
* Valid parentheses
* Reversing string
* Reversing linked list
* Profix calculation

## Queues
A list or collection with the restriction that insertion can be performed at one end (so called rear) and deletion can also be performed at other end (so called front.)

### Operations
* `Enqueue(val)` to add an element into queue
* `Dequeue()` to delete an element from queue, return that element
* `Front()` to get first element from queue
* `IsEmpty()` to check if the queue is empty

all of the operations take constant time or O(1)

## Tree
A tree data structure can be defined recursively as a collection of nodes (starting at a root node), where each node is a data structure consisting of a value, together with a list of references to nodes (the "children"), with the constraints that no reference is duplicated, and none points to the root. ([Wikipedia](https://en.wikipedia.org/wiki/Tree_(data_structure)))
A tree of N nodes have N - 1 edges

### Applications
* Storing naturally hierarchical data (e.g. file stystem)
* Organize data for quick search, isertion, deletion (e.g. Binary search tree)
* Tire (e.g. dictionary)
* Network routing algorithm

### Binary Tree
A tree that each node can have at most 2 children.
#### Strict/proper Binary tree
each node can have either 2 or 0 children.
#### Complete Binary Tree
All levels except possibly the last are completely filled and all anodes are as left as possible. Max number of nodes at level i is 2^i.
#### Perfect Binary Tree
#### Balanced Binary Tree
Difference between height of left and right subtree for every node is not more than K (mostly 1.) Height is number of eges in longest path from root to a leaf. Heigh of an empy tree is -1, a tree with one node is 0.

#### Implementation
by using
* dynamically created nodes
* arrays

```
    2        <- root
   / \
  3   4      <- 3, 4 are sibling
     / \
    5   8    <- 5,8 are sibling, leaf
```
