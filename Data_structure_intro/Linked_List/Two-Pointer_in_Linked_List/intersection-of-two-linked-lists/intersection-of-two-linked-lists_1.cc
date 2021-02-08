class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      auto run_a = headA;
      auto run_b = headB;
      int nulltimeA = 0;
      int nulltimeB = 0;
      while (nulltimeA!=2 && nulltimeB!=2) {
        if (run_a == run_b) {
          return run_a;
        }
        if (run_a != nullptr) {
          run_a = run_a->next;
        } else {
          run_a = headB;
          nulltimeA+=1;
        }
        if (run_b != nullptr) {
          run_b = run_b->next;
        } else {
          run_b = headA;
          nulltimeB += 1;
        }
      }
      return nullptr;
      
    }
};