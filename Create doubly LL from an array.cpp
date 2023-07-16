/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    // Write your code here
    Node *head = nullptr;
    Node *ptr = nullptr;

    for(int i=0; i<arr.size(); i++)
    {
        Node *new_node = new Node(arr[i]);
        if(head == nullptr)
        head = new_node;
        else
        {
            ptr->next = new_node;
            new_node->prev = ptr;
        }
        ptr = new_node;
    }
    return head;
}
