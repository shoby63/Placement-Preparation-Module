int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    if(head == nullptr)
    return 0;

    Node<int> *ptr = head;
    while (ptr != nullptr) {
      if(ptr->data == k)
      return 1;
      ptr = ptr->next;
    }
    return 0;
}
