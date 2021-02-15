/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode* head;
      if (l1 == nullptr) {
        return l2;
      }
      if (l2 == nullptr) {
        return l1;
      }
      // both are not nullptr
      if (l1->val < l2->val) {
        cout << "head is l1" << endl;
        head = l1;
        l1 = l1->next;
      } else {
        cout << "head is l2" << endl;
        head = l2;
        l2 = l2->next;
      }
      // l1 or l2 may be nullptr
      auto run = head;
      while (l1 != nullptr || l2 != nullptr) {
        // l1 or l2 may be nullptr but not both
        if (l1 == nullptr) {
          run->next = l2;
          cout << "l1 == null return" << endl;
          return head;
        }
        if (l2 == nullptr) {
          run->next = l1;
          cout << "l2 == null return" << endl;
          return head;
        }
        // both are not nullptr
        if (l1->val < l2->val) {
          cout << "insert l1 " << l1->val << endl;
          run->next = l1;
          l1 = l1->next;
          run = run->next;
        } else {
          cout << "insert l2 " << l2->val << endl;
          run->next = l2;
          l2 = l2->next;
          run = run->next;
        }
        // l1 or l2 may be nullptr
      }
      // both l1 and l2 are nullptr
      cout << "l1 and l2 are nullptr return" << endl;
      run->next = nullptr;
      return head;
    }
};