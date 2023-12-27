class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos) {

            // if in loop, substring still exsists, keep iterating
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};