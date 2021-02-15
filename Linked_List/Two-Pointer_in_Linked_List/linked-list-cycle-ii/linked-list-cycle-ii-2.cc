/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode *fast = head;
      ListNode *slow = head;
      while ((fast != nullptr) && (fast->next != nullptr)) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {  // find cycle
          break;
        }
      }
      if ((fast == nullptr) || (fast->next == nullptr)) {
        return nullptr;
      }
      // restart slow
      slow = head;
      while (slow != fast) {
        slow = slow -> next;
        fast = fast -> next;
      }
      return slow;
    }
};