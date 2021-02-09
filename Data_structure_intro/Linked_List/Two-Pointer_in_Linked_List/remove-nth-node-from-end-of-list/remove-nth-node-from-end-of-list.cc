class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      auto first_p = head;
      auto second_p = head;
      
      for (int i = 0; i < n; ++i) {
        first_p = first_p->next;  // n <= sz 
      }
      if (!first_p) {  // first_p == nullptr means sz = n, we should remove head
        if (!head->next) {
          return nullptr;
        } else {
          // head->next not null
          head = head->next;
          return head;
        }
      }
      while (first_p->next !=nullptr) {
        first_p = first_p -> next;
        second_p = second_p -> next;
      }
      // remove next of second_p
      second_p->next = second_p->next->next;
      return head;
    }
};