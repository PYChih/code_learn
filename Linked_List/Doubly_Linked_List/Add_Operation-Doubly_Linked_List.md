# Add_Operation-Doubly_Linked_List
- if we want to insert a new node cur after an existing node prev, we divide this process into two steps:
  - link cur with prev and next, where next is the origial next node of prev;
  - re-link the prev and next with cur.
- similar to the singly linked list, both the time and the sapce complexity of the add operation are O(1)
# An Example
- what if we want to insert a new node at the beginning or at the end?