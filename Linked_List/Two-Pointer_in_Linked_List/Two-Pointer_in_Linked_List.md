- Two scenarios to use the two-pointer technique:
  1. starts at different position
  2. moved at different speed (a.k.a slow-pointer and fast-pointer technique)
> Given a linked list, determine if it has a cycle in it.
- using the hash table
- more efficient solution using ==the two-pointer technique==  
  1. If there is no cycle, the fast pointer will stop at the end of the linked list.
  2. If there is a cycle, the fast pointer will eventually meet with the slow pointer.
> What should be the proper speed for the two pointers?
  1. move the slow pointer one step at a time while moving the fast pointer two steps at a time.