// Reverse a linked list
// gfg 

// problem link:- https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1&category[]=Linked%20List&curated[]=7&sortBy=submissions

/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

/* 
    Using Tail Recurssion
    Space Complexity O(1)
    Time Complexity O(N)
*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
        if(head == NULL || head -> next == NULL) 
            return head; 
            
        Node *rest = reverseList(head -> next);
        head -> next -> next = head; 
        
        head -> next = NULL;
        
        return rest;
    }
    
};
    
