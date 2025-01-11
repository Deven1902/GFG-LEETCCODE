class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k) return false;
        if(s.length()==k) return true;
        
        unordered_map<char,int> mp;
        for(auto ch: s) mp[ch]++;

        int oddCharactersCount = 0;
        for(auto ch: mp) if(ch.second%2 == 1) oddCharactersCount++; 

        return oddCharactersCount<=k;
    }
};