// approach:- using stack. 

// below is the pseudo code. 
// if(x=='#' && !mp1.empty()) then we’ve to pop the last element from the stack.
// if(x=='#' && mp1.empty()) Here we have no element to pop, simply skip this.
// else we’ll push every other character to the stack.

// We’ve to do this operation for both the strings. And at last we’ll compare both the stacks
// If both stacks are equal then return true, else false. 

/* class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> m1, m2;

        for(auto x:s) {
            if(x=='#' && !m1.empty())
                m1.pop();

            else if(x=='#' && m1.empty())
                continue;

            else 
                m1.push(x); 
        }   
        
        for(auto x:t) {
            if(x=='#' && !m2.empty())
                m2.pop();

            else if(x=='#' && m2.empty())
                continue;

            else 
                m2.push(x); 
        }   

        if(m1 == m2)
            return true; 
 
        return false; 
    }
}; */

// time complexity:- O(n+m) -> where n amd m are lenghts of two strings. teh code iterates over the two sterings. 

// space complexity:- O(n+m) -> where n amd m are lenghts of two strings. that much space is used in the stack. 

// alternative approach:- 

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int x=0, y=0;
        
        // for string s
        for(int i=0; i<s.size(); i++){
            if(s[i] == '#'){
                x--;
                x = max(0, x);
            }
            else{
                s[x] = s[i];
                x++;
            }
        }
        // for string t
        for(int i=0; i<t.size(); i++){
            if(t[i] == '#'){
                y--;
                y = max(0, y);
            }
            else{
                t[y] = t[i];
                y++;
            }
        }
        
        if(x != y) return false;
        else{
            for(int i=0; i<x; i++){
                if(s[i] != t[i]) return false;
            }
            return true;
        }
    }
};