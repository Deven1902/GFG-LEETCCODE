class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int i=0;

        while(i<s.length()) {
            // check if the rightmost character of ans is same as current character of s, and then return 
            if(ans.length() > 0 && ans[ans.length() -1] == s[i])
                ans.pop_back(); 

            else
                ans.push_back(s[i]);

            i++;
        }
        return ans;
    }
};