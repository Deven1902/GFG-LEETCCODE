class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();
        if(n%2!=0) return false;
        
        int fwd=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || locked[i]=='0') fwd++;
            else if(s[i]==')') fwd--;
            if(fwd<0) return false;
        }

        int bwd=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')' || locked[i]=='0') bwd++;
            else if(s[i]=='(') bwd--;
            if(bwd<0) return false;
        }

        return true;
    }
};