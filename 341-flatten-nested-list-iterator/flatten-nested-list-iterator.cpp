/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

/* 
class NestedIterator {
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        begins.push(nestedList.begin());
        ends.push(nestedList.end());
    }
    
    int next() {
        hasNext();
        return (begins.top()++)->getInteger();
    }
    
    bool hasNext() {
        while (begins.size()) {
            if (begins.top() == ends.top()) {
                begins.pop();
                ends.pop();
            } else {
                auto x = begins.top();
                if (x->isInteger())
                    return true;
                begins.top()++;
                begins.push(x->getList().begin());
                ends.push(x->getList().end());
            }
        }
        return false;
    }

private:
    stack<vector<NestedInteger>::iterator> begins, ends;
};
*/ 

class NestedIterator {
public:
    
    vector<int> res; //store final result
    int idx=0; //store index
    
    void flattenList(vector<NestedInteger> &nestedList)
    {
        for(auto x:nestedList)
        {
            //if x is int then push it into the vector res
            if(x.isInteger())
            {
                res.push_back(x.getInteger());
            }
            
            //if x is list then call the flattenList function again
            else
            {
                flattenList(x.getList());
            }
        }
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) 
    {
        //call the flattenList function to make the 1d array of whole nestedList
        flattenList(nestedList);
        
    }
    
    int next() 
    {
        //return the value at index idx
        return res[idx++];   
    }
    
    bool hasNext() 
    {
        //check whether next elements is available or not by checking index value is less than res size
        return idx<res.size();   
    }
};

// time complexity:- O(N) -> N is total no of integers in the list 

// space complexity:- O(N) -> N is total no of integers in the list 
/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */