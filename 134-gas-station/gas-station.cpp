class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int deficit=0;
        int balance=0; 

        int start=0; 

        // iterate over all solutions, and check if they fullfil the condition, else move to next. 
        for(int i=0; i<gas.size(); i++) {
            balance = balance + gas[i] - cost[i];

            if(balance<0) {
                deficit += abs(balance); 
                // the line below caused error in program, coz increment operator os post operator, so line excetued first and then the new value was assigned to i. hence ans was wrong. 
                // start = i++;

                start = i+1; 
                balance=0;
            }
        }

        if(balance - deficit >=0) return start; 
        else return -1; 

    }
};