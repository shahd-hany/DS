
void splitList(Node* head, Node** head1,
    Node** head2)
{
    if (head == nullptr)
        return;
    Node* slow = head;
    Node* fast = head;
    while (fast->next != head &&
        fast->next->next != head)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    if (fast->next->next == head)
    {
        fast = fast->next;
    }
        * head2 = slow->next;
    * head1 = head;
    fast->next = slow->next;
    slow->next = head;
   slow->next->prev = nullptr;
}

