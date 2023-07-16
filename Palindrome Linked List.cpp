/**
 Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
 
Example 1:
Input: head = [1,2,2,1]
Output: true

Example 2:
Input: head = [1,2]
Output: false
**/

      
class Solution {
public:
    ListNode* reverse(ListNode* ptr) {
      
        ListNode *pre = NULL;
        while(ptr != NULL)
        {
            ListNode *forward = ptr->next;
            ptr->next = pre;
            pre = ptr;
            ptr = forward;
        }
        return pre;
    }
    
    
    bool isPalindrome(ListNode* head) {
    
     if(head==NULL || head->next==NULL) return true;
        
     ListNode* slow = head;
     ListNode* fast = head;
        
    while(fast->next != NULL && fast->next->next != NULL) 
    {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
    ListNode* dummy = head;
        
    while(slow != NULL)
    {
        if(dummy->val != slow->val)
            return false;
        dummy = dummy->next;
        slow = slow->next;
    }
        
    return true;
    }
};

 
