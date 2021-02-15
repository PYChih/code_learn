# Introduction-Doubly Linked_List
- A node in a singly linked list has the value field, and a "next" reference field to link nodes sequentially.
## Definition
- doubly linked list works in a similar way but has one more reference field which is known as the "prev" field.
```
// Definition for doubly-linked list.
struct DoublyListNode {
    int val;
    DoublyLintNode *next, *prev;
    DoublyListNode(int x) : val(x), next(nullptr), prev(nullptr) { }
};
- we will use the head node to represent the whole list.
```
## Operations
- how to access data
  - we are not able to access a random position in constant time.
  - we have to traverse from the heaed to get the i-th node we want.
  - the time complexity in the worse case will be O(N), where N is the length of the linked list.
- insert a new node
- delete an existing node in a doubly linked list.