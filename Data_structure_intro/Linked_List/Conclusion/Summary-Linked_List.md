# Summary-Linked_List
## Review
- briefly review the performance of the singly linked list and doubly linked list.
  - both of them are not able to access the data at a random position in constant tme.
  - both of them are able to add a new node after given node or at the beginning of the list in O(1) time.
  - Both of them are able to delete the first node in O(1) time.
  - little different to delete a given node(including the last node)
    - in singly linked list, it is not able to get the previous node of a given node so we have to spend O(N) time to find out the previous node before deleting the given node.
    - In a doubly linked list, it will be much easier bacause we can get the previous node with the "prev" reference field. So we can delete a given node in O(1) time.
## Comparison
- If you need to add or delete a node frequently, a linked list could be a good choice.
- If you need to access an element by index often, an array might be a better choice than a linked list.