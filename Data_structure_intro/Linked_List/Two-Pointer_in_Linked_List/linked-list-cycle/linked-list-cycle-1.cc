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
    bool hasCycle(ListNode *head) {
      if (head == nullptr) {return false;}
      unordered_set<ListNode*> nodeset;
      while (head->next != nullptr) {
        if (nodeset.find(head) != nodeset.end()) {
          return true;
        }
        nodeset.insert(head);
        head = head->next;
      }
      return false;
    }
};