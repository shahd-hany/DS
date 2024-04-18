
Node* merge(Node* rear1, Node* rear2) {
    if (rear1 == nullptr) return rear2;
    if (rear2 == nullptr) return rear1;

    Node* mrg = new Node();
    Node* mrear = mrg;
    Node* curr1 = rear1->next;
    Node* curr2 = rear2->next;

    do {
        if (curr2->data < curr1->data) {
            mrear->next = new Node();
            mrear = mrear->next;
            mrear->data = curr2->data;
            curr2 = curr2->next;
        }
        else if (curr1->data < curr2->data) {
            mrear->next = new Node();
            mrear = mrear->next;
            mrear->data = curr1->data;
            curr1 = curr1->next;
        }
        else { 
            mrear->next = new Node();
            mrear = mrear->next;
            mrear->data = curr1->data;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    } while (curr1 != rear1->next && curr2 != rear2->next);

    while (curr1 != rear1->next) {
        mrear->next = new Node();
        mrear = mrear->next;
        mrear->data = curr1->data;
        curr1 = curr1->next;
    }

   
    while (curr2 != rear2->next) {
        mrear->next = new Node();
        mrear = mrear->next;
        mrear->data = curr2->data;
        curr2 = curr2->next;
    }

   
    mrear->next = mrg->next;
    delete mrg;

    return mrear;
}
