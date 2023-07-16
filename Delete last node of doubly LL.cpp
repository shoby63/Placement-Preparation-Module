/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    // Write your code here
      Node* temp=head;
      if(head==nullptr)
      {
         return nullptr;
      }

    if(head->next==nullptr)
    {
       free(head);
            return nullptr;
    }

    while(temp->next!=nullptr)
    {
             temp=temp->next;
    }

    temp->prev->next=nullptr;
        free(temp);
             return head;
}
