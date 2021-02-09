# Summary
## template for two-pointer problem in the linked list
```
// Initialize slow & fast pointers
ListNode* slow = head;
ListNode* fast = head;
/**
 * Change this condition to fit specific problem.
 * Attention: remember to avoid null-pointer error
 **/
while (slow && fast && fast->next) {
    slow = slow->next;  // move slow pointer one step each time
    fast = fast->next->next;  // move fast pointer two steps each time
    if (slow == fast) {  // change this codition to fit specific problem
        return true;
    }
}
return false;  // change return value to fit specific problem
```
## Tips
- Always examine if the node is null before you call the next field.
  - before we run fast = fast.next.next, we need to examine both fast and fast.next is not null
- Carefully define the end conditions of your loop
  - make sure your end conditions will not result in an endless loop
## Complexity Analysis
- space complexity is easy. 
  - only use pointers without any other extra space, the space complexity will be O(1)
- it is more difficult to analyze the time complexity
- How many times we will run our loop?
  - assume we move the faster pointer 2 steps each time and move the slower pointer 1 step each time.
  - if there is no cycle, the fast pointer takes N/2 times to reach the end of the linked list, where N is the length of the linked list
  - if there is a cycle, the fast pointer needs M times to catch up the slower pointer, where M is the length of the cycle in the list.
- Obviously, M <=N. So we will run the loop up to N times. ?
- And for each loop, we only need constant time. So the time complexity of this algorithm is O(N) in total. ?
- If it is hard to analyze for all situations, consider the worst one.