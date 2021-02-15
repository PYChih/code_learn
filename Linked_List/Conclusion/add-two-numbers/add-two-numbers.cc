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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *head, *hold;
      int new_val = 0;
      bool add_one = false;
      // take old l1
      // given two non-empty linked lists
      new_val = l1->val + l2->val;
      if (new_val >= 10) {
        new_val = new_val - 10;
        add_one = true;
      }
      head = l1;
      hold = l2;
      l1 = l1->next;
      l2 = l2->next;
      head->val = new_val;
      auto keep_head = head;
      // l1 and l2 are not both null
      while (l1 != nullptr || l2!=nullptr) {
        // l1 is nullptr
        if (l1 == nullptr) {
          while (l2 != nullptr) {
            new_val = l2->val;
            if (add_one) {
              new_val += 1;
              add_one = false;
            }
            if (new_val >= 10) {
              new_val = new_val - 10;
              add_one = true;
            }
            auto temp = l2;
            l2 = l2->next;
            temp->val = new_val;
            head->next = temp;
            head = temp;
          }
          if (add_one) {
            hold->next = nullptr;
            hold->val = 1;
            head->next = hold;
            add_one = false;
          } else {
            head->next = nullptr;
          }
          return keep_head;
        }
        // l2 is nullptr
        if (l2 == nullptr) {
          while (l1 != nullptr) {
            new_val = l1->val;
            if (add_one) {
              new_val += 1;
              add_one = false;
            }
            if (new_val >= 10) {
              new_val = new_val - 10;
              add_one = true;
            }
            auto temp = l1;
            l1 = l1->next;
            temp->val = new_val;
            head->next = temp;
            head = temp;
          }
          if (add_one) {
            hold->next = nullptr;
            hold->val = 1;
            head->next = hold;
            add_one = false;
          } else {
            head->next = nullptr;
          }
          return keep_head;
        }
        // both l1 and l2 not nullptr
        new_val = l1->val + l2->val;
        if (add_one) {
          new_val += 1;
          add_one = false;
        }
        if (new_val >= 10) {
          new_val = new_val - 10;
          add_one = true;
        }
        auto temp = l1;
        l1 = l1->next;
        temp->val = new_val;
        head->next = temp;
        head = temp;
        l2 = l2->next;
      }
      if (add_one) {
        hold->next = nullptr;
        hold->val = 1;
        head->next = hold;
        add_one = false;
      } else {
        head->next = nullptr;
      }
      return keep_head;
    }
};