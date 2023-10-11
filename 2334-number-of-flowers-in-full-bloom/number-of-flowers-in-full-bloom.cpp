class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> ans;
        vector<int> start;
        vector<int> end; 


        // interate over vector<flower> and add start and end time of each flower bloom in respective vectors. 

        for(int i=0; i<flowers.size(); i++) {
            start.push_back(flowers[i][0]);
            end.push_back(flowers[i][1]);
        }

        // sorting the vectors in asceding order. 

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        // iterate over the people vector, and and calculate the number of flowers that are in full bloom at the time of each person's visit. 

        for (int i = 0; i < people.size(); i++) {
            
            // upper_bound() function returns an iterator to the first element in the start
            int blommed_till_now = upper_bound(start.begin(), start.end(), people[i]) - start.begin();
            // lower_bound() function returns an iterator to the first element in the end
            int bloomed_till_off = lower_bound(end.begin(), end.end(), people[i]) - end.begin();
            ans.push_back(blommed_till_now - bloomed_till_off);
        }

        // number of flowers that are in full bloom at a given time is the difference between the two iterators.
        return ans; 
    }
};

// Time complexity:- O(n log n) 
// this is because the function is sorting and iterating over multiple vectors. 

// Space complexity:- O(n)
// this is because function is storing 2 vectors of n size. 