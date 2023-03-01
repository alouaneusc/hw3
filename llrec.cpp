#include "llrec.h"
#include <iostream>
// using namespace std;

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

Node* llpivot_helper(Node* head, Node*& smaller, Node*& larger, int pivot);

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot) {



	if (head == nullptr) {
        smaller = nullptr;
        larger = nullptr;
        return;
    }

Node* temp = head->next;

    if (head->val > pivot) {
        larger = head;
        llpivot(temp, smaller, larger->next, pivot);
				head = nullptr;

    }
    else {
        smaller=head;
        llpivot(temp, smaller->next, larger, pivot);
				head = nullptr;
    }
}




