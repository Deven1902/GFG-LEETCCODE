// Merge Sort for Linked List

// gfg 

// problem link:- https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1?page=1&category[]=Linked%20List&curated[]=7&sortBy=submissions

class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    
    Node* mergeSort(Node* head) {
        // your code here
        
        // simple c++ code. 
        vector<int> a; // an array to store list.
        
        Node *curr = head; 
        
        while(curr != head) {
            a.push_back(curr->data);
            curr = curr -> next;
        }
        
        sort(a.begin(), a.end());  //sorting the stored list
        
        Node *curr2 = head;
        
        int i=0;
        
        while(curr2 != NULL) {
            curr2 -> data = a[i];
            curr2 = curr2 -> next;
            i++;
        }
        
        return head; 
    }
};
