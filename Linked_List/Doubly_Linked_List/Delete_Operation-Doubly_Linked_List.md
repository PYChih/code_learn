# Delete Operation
- if we want to delete an existing node cur from the doubly linked list, we can simply link its previous node prev with its next node next.
- Unlike the singly linked list, it is easy to get the previous node in constant time with the "prev" field.
- Since we no longer need to travverse the linked list to get the previous node, both the time and space complexity are O(1)
## An Example
- link its previous node and its next node