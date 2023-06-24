class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        set<int>row,col;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto it=row.begin();it!=row.end();it++){
            for(int j=0;j<mat[0].size();j++){
                mat[*it][j]=0;
            }
        }
        for(auto it=col.begin();it!=col.end();it++){
            for(int j=0;j<mat.size();j++){
                mat[j][*it]=0;
            }
        }
    }
};