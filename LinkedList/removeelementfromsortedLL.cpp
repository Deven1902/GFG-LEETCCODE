// Remove duplicate elements from sorted Linked List

// gfg 

// problem link:- https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head) {
    // your code goes here
    Node* x = head;
    while(x->next) {
        if(x->data == x->next->data) x->next = x->next->next;
        else x = x->next;
    }
    return head;
}
