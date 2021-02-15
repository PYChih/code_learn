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
    ListNode* rotateRight(ListNode* head, int k) {
      int sz = 0;
      if (!head) {
        return head;
      }
      auto fast_ptr = head;
      auto slow_ptr = head;
      // we want fast_ptr run k step, then until f to null, s->next will be k
      while (fast_ptr && sz < k) {
        // fast_ptr not null
        fast_ptr = fast_ptr->next;
        sz++;
        // cout << sz << " times" << endl;
      }  // sz == k or sz==n
      if (!fast_ptr) {  // if n <= k
        k = k % sz;  // if sz==0 devide by zero
        // now k < n
        fast_ptr = head;
        sz = 0;
        while (fast_ptr && sz < k) {
          fast_ptr = fast_ptr->next;
          sz++;
        }
      }
      // deal with k < n
      while (fast_ptr && fast_ptr->next) {
        fast_ptr = fast_ptr->next;
        slow_ptr = slow_ptr->next;
      }
      // fast_ptr == nullcase
      // if (!fast_ptr) {
      //   return head;
      // }
      // fast_ptr->next == nullcase
      fast_ptr->next = head;
      head = slow_ptr->next;
      slow_ptr->next = nullptr;
      // cout << "k = " << k;
      return head;
    }
};