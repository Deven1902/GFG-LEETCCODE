class Solution {
public:
    vector<int> getRow(int rowI) {
        vector<vector<int>> v; // store pascal's traingle
        vector<int> e; // placeholder to return row

        // iterate through rows from 0 to rowI
        for(int i=0; i<=rowI; i++) {
            vector<int> a; //store elements of the current row

            // iterate through elements of the current row
            for(int j=0; j<=i; j++) {
                
                // If it's the first or last element, set it to 1
                if(j==0 || j==i) {
                    a.push_back(1);
                }

                // calculate using elements from the previous row
                else {
                    a.push_back(v[i-1][j]+v[i-1][j-1]);
                }
            }

            // return current row. 
            if(i==rowI) return a;
            
            // Add the current row to Pascal's Triangle
            v.push_back(a);
        }
        
        // return an empty vector if row not found
        return e;
    }
};

// time complexity:- O(n^2) -> nested loop.

// space complexity:- O(rowI^2) -> this is because we have n rows in pascals traingle. 
                                // and there are almost n elements in each rows. 
                                // which makes it n^2. 

// need to have a more optimised solution. 
