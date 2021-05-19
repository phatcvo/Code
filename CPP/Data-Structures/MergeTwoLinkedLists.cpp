/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

// Recursive solution .  Merge two lists by constantly comparing values
// until headA or headB are NULL, where then the stack collapses and
// the two lists are combined.
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    if(headA == NULL)
        return headB;
    if(headB == NULL)
        return headA;
    if(headA->data < headB->data) {
        headA->next = MergeLists(headA->next, headB);
        return headA;
    }
    else {
        headB->next = MergeLists(headA, headB->next);
        return headB;
    }
}
