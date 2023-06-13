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

// alternative solution. 

class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    
    Node* merge(Node* a,Node* b){
        Node* n = new Node(0),*t = n;
        while(a && b){
            if(a->data <= b->data){
                t->next = a;
                a = a->next;
            }
            else{
                t->next = b;
                b = b->next;
            }
            t = t->next;
        }
        while(a){
            t->next = a;
            a = a->next;
            t = t->next;
        }
        while(b){
            t->next = b;
            b = b->next;
            t = t->next;
        }
        return n->next;
    }
    
    Node* mergeSort(Node* h) {
        // your code here
        if(h->next == NULL) return h;
        Node* s = h,*f = h->next;
        while(f && f->next){
            s = s->next;
            f = f->next->next;
        }
        f = s->next;
        s->next = NULL;
        return merge(mergeSort(h),mergeSort(f));
    }
};
