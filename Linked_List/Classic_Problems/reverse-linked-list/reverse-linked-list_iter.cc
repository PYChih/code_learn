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
    ListNode* reverseList(ListNode* head) {
      auto run_ptr = head;
      ListNode* save_ptr = nullptr;
      while (run_ptr != nullptr) {
        ListNode* temp = run_ptr->next;
        run_ptr->next = save_ptr;
        save_ptr = run_ptr;
        // cout << "run" << run_ptr->val << endl;
        run_ptr = temp;
      }
      return save_ptr;
    }
};