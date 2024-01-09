/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode *reverseRecursion(ListNode *prev, ListNode *curr) {
        if(curr == NULL) return prev;  //base case; 

        ListNode *newN = curr -> next; 
        curr -> next = prev; 
        prev = curr; 
        curr = newN; 

        ListNode *ans = reverseRecursion(prev, curr); 

        return ans;
    }


    ListNode* reverseList(ListNode* head) {
        
        // iterative solution \U0001f447
        /*
        ListNode *prev = NULL;
        ListNode *curr = head; 

        // while(curr != NULL) {
        //     curr -> next = prev; 
        //     curr++;
        //     prev++; 
        // }
        // head = prev; 
        // return head;  

        while(curr != NULL) {
            ListNode *nextN = curr -> next; 
            curr -> next = prev; 
            prev = curr; 
            curr = nextN; 
        }
        return prev; 

        */ 

        // recursive solution \U0001f447 

        ListNode *prev = NULL;
        ListNode *curr = head; 

        return reverseRecursion(prev, curr); 
    }
};