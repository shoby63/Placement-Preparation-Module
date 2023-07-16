Node* reverseDLL(Node* head) { 

        Node* pre = nullptr;   
        Node* curr=head; 

        while(curr != nullptr)

        {  
        Node * forward = curr->next; 
        curr->next = pre;     
        curr->prev = pre;  
        pre = curr;  
        curr = forward;  
        } 
  
 return pre;
  
}
