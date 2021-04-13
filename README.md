# Data structures in C

## Array
A data structure consisting of a collection of elements (values or variables), each identified by at least one array index or key. (Wikipedia)

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
- `Push(x)` to add an element to stack
- `Pop()` to remove a top (or the latest added) element from stack
- `Top()` to get a top element from the stack
- `IsEmpty()` to check if stack is empty

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
A list or collection with the restriction that insertion can be performed at one end (so called rear) and deletion can also be performed at other end (so called front)

### Operations
- `Enqueue(val)` to add an element into queue
- `Dequeue()` to delete an element from queue, return that element
- `Front()` to get first element from queue
- `IsEmpty()` to check if the queue is empty

all of the operations take constant time or O(1)

