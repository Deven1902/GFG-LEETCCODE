class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        int r = requests.size();
        int ret = 0;
        for(int i=0; i<(1<<r); i++) {
            vector<int> ind(n);
            for(int j=0; j<r; j++) {
                if((1<<j)&i) {
                    int u = requests[j][0], v = requests[j][1];
                    ind[u]--;
                    ind[v]++;
                }
            }
            bool b = true;
            for(int i: ind) 
                if(i != 0) {
                    b = false;
                    break;
                }
            if(b)
                ret = max<int>(ret, bitset<32>(i).count());
        }
        return ret;
    }
};