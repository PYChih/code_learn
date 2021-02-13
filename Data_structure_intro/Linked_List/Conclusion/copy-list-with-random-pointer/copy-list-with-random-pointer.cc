/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      unordered_map<Node*, Node*> m;
      auto run = head;
      auto prv = head;
      // first iteratively (create node)
      if (run) {
       m[run] = new Node(run->val);
      } else {
        return nullptr;
      }
      prv = run;
      run = run->next;
      while (run != nullptr) {
        m[run] = new Node(run->val);
        m[prv]->next = m[run];
        prv = run;
        run = run->next;
      }
      // second iteratively (link random node)
      m[prv]->next = nullptr;
      run = head;
      while (run != nullptr) {
        m[run]->random = m[run->random]; 
        run = run->next;
      }
      return m[head];
      
    }
};