class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> ans;
        vector<int> start;
        vector<int> end; 

        for(int i=0; i<flowers.size(); i++) {
            start.push_back(flowers[i][0]);
            end.push_back(flowers[i][1]);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        for (int i = 0; i < people.size(); i++) {
            int blommed_till_now = upper_bound(start.begin(), start.end(), people[i]) - start.begin();
            int bloomed_till_off = lower_bound(end.begin(), end.end(), people[i]) - end.begin();
            ans.push_back(blommed_till_now - bloomed_till_off);
        }

        return ans; 
    }
};