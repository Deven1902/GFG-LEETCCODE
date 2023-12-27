class Solution {
public:
    int expand(string s, int i, int j) {
        int cnt=0;

        while(i>=0 && j<s.length() && s[i] == s[j]) {
            cnt ++;
            i--;
            j++;
        }

        return cnt; 

    }

    int countSubstrings(string s) {
        int cnt = 0;

        for(int i=0; i<s.length(); i++) {
            int j=i;

            int oddAns = expand(s, i,j);

            j=i+1;
            int evenAns = expand(s, i,j);

            cnt = cnt+oddAns+evenAns;
        }
        return cnt; 
    }
    
};