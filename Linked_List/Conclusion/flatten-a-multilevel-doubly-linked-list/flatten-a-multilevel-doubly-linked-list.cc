/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
      auto run = head;
      Node *prv, *chead;
      while (run) {
        if (run->child) {
          chead = run->child;
          run->child = nullptr;
          prv = run->next;
          run->next = chead;
          chead->prev = run;
          while (chead->next) {
            chead = chead->next;
          }
          chead->next = prv;
          if (prv) prv->prev = chead;
        }
        run = run->next;
      }
      return head;
    }
};