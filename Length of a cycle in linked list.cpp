int lengthOfLoop(Node *head) {
    // Write your code here
    Node* slow=head;
    Node *fast=head;

    int ans = 1;

    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            slow = slow->next;
            while(slow != fast){
                slow = slow->next;
                ans++;
            }
            return ans;
        }
    }
    return 0;
}
