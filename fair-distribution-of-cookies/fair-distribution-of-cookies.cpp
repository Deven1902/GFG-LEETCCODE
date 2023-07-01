class Solution {
public:

    int answer=INT_MAX;
    void f(int mask,int count,vector<int> &cookies,int k,int currentSum,int maxSum,int candiesUsed){
        if(candiesUsed == cookies.size()){
            if(count==k && currentSum!=0) 
                answer=min(answer,maxSum);
            return;
        }
        // start new 
        if(currentSum!=0) 
            f(mask,count+1,cookies,k,0,maxSum,candiesUsed);
        // continue prev call;
        for(int j=0;j<cookies.size();j++){
            if((mask & 1<<j) == 0){
                f(mask|1<<j , count,cookies,k,currentSum+cookies[j],max(maxSum,currentSum+cookies[j]),1+candiesUsed);
            }
        }
    }

    int distributeCookies(vector<int>& cookies, int k) {
        int maxSum=0;
        f(0,1,cookies,k,0,maxSum,0);
        return answer;
    }
};