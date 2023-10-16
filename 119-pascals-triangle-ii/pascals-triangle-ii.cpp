class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row = vector<int>(1, 1);
        for (int i = 1; i <= rowIndex; ++i)
        {
            for (int j = row.size() - 1; j > 0; --j)
            {
                row[j] = row[j] + row[j-1];
            }
            row.push_back(1);
        }
        return row;
    }
};

// time complexity:- O(n^2) -> nested loop.

// space complexity:- O(rowI^2) -> this is because we have n rows in pascals traingle. 
                                // and there are almost n elements in each rows. 
                                // which makes it n^2. 

// need to have a more optimised solution. 