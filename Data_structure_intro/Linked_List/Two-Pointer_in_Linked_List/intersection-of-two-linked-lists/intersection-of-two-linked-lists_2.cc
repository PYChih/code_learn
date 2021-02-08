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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode* headA1 = headA;
      ListNode* headB1 = headB;
      
      while (headA1 != headB1)
      {
        headA1 = headA1 ? headA1->next : headB;
        headB1 = headB1 ? headB1->next : headA;
      }
      
      return headA1;
    }
};