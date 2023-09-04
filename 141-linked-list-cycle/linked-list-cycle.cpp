/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// the below solution is made by two pointer approach. 

// the fast and slow pointer pattern of the questions -> classic example.

// Link to a nice blog to understand the pattern of the problem \U0001f447\U0001f447

// www.educative.io/courses/grokking-coding-interview-patterns-python/fast-and-slow-pointers-introduction

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head == NULL || head->next == NULL)    
            return false;

        while(fast != NULL && fast->next != NULL ) {
            fast = fast->next->next;
            slow = slow->next;

            if(slow==fast)  
                return true;
        }

        return false;
    }
};

// Time complexity:- O(n) 
// Space Complexity:- O(1) 