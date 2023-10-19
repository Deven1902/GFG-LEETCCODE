class Solution {
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
};