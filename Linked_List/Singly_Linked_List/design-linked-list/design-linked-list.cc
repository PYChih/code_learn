struct Node {
  int val;
  Node *next;
  Node(int x) : val(x), next(nullptr) {}
};
class MyLinkedList {
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
      this->size = 0;
      this->head = nullptr;
      this->tail = nullptr;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        // corner: size == 0
        // corner: index > size
        if (index >= size) {
          return -1;
        }
        // index valid
        auto run = head;
        int i = 0;
        // while run to index-th node
        // corner: index == 0
        // corner: size == 0
        // if index < size, run may not be nullptr
        while (i < index) {
          run = run->next;
          ++i;
        }
        return run->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* temp = new Node(val);
        this->size++;
        temp->next = head;
        head = temp;
        if (size == 1) {
          tail = head;
        }
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
      Node* temp = new Node(val);
      this->size++;
      if (size == 1) {
        head = temp;
        tail = temp;
      } else {
       tail->next = temp;
       tail = temp; 
      }
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        // add before the index
        if (index==0) {
          this->addAtHead(val);
          return;
        }
        if (index == size) {
          this->addAtTail(val);
          return ;
        }
        if (index > size) {
          return;
        }
        // index < size and size != 0
        auto run = head;
        int i = 1;
        // run to index before
        while (i < index) {
          run = run->next;
          ++i;
        }
        Node *mid = new Node(val);
        mid->next = run->next;
        run->next = mid;
        ++size;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
      // get index-th node and assert valid
      if (index >= size) {
        return;
      }
      // zero size unvalid
      if (size == 0) { return; }
      // list not null
      if (index == 0) {
        // remove head
        if (size == 1) {
          delete head;
          head = nullptr;
          tail = nullptr;
          size = 0;
          return;
        } else {
          // remove head
          auto temp = head;
          head = head->next;
          delete temp;
          --size;
          return;
        }
      }
      // remove mid
      if (index < size) {
        auto run = head;
        int i = 1;
        // run to index -1
        while (i < index) {
          run = run->next;
          ++i;
        }
        auto temp = run->next;
        if (!temp->next) {  // if tail
          run->next = nullptr;
          delete temp;
          tail = run;
          --size;
        } else {  // not tail
          run->next = temp->next;
          --size;
          delete temp;
        }
        return ;
      }
      cout << "can't here" << endl;
    }
    Node* head;
    Node* tail;
    int size;
  
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */