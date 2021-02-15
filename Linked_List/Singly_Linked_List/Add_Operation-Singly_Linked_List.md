# Add Operation - Singly Linked List
## if we want to add a new value after a given node prev, we should:
    1. Initialize a new node cur with the given value;
    2. Link the "next" field of cur to prev's next node next;
    3. Link the "next" field in prev to cur
## Add a Node at the Beginning
    1. Initialize a new node cur;
    2. Link the new node to our original head node head.
    3. Assign cur to head.