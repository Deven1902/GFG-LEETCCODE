class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        string temp;
        int matchCount = 0;

        for(int i=1; i<strs.size(); i++){
            for(int j=0; j<strs[i].size(); j++){
                if(prefix[j] != ' '){
                    if(prefix[j] == strs[i][j]){
                        temp += strs[i][j];
                    }else{
                        break;
                    }
                    
                }
            }

            if(!temp.empty()){
                matchCount++;
                prefix.erase();
                prefix = temp;
                temp.erase();
            }
        }

        if((matchCount == strs.size()-1) || (strs.size() == 1)){
            return prefix;
        }else{
            return "";
        }
    }
};