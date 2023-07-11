/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int visited[500];
    
    void solve(vector<vector<int>>&graph,int val,int k,vector<int>&ans){
        //base case
        if(visited[val]==1)return;
        if(k==0){
            ans.push_back(val);
            return;
        }
        visited[val]=1;
        for(auto it:graph[val])
            solve(graph,it,k-1,ans);
        visited[val]=0;
        
    }
    void createGraph(TreeNode* &root,vector<vector<int>>&graph)
    {
        //base case
        if(root==NULL)return;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node->left!=NULL){
                graph[node->val].push_back(node->left->val);
                graph[node->left->val].push_back(node->val);
                q.push(node->left);
            }
            if(node->right!=NULL){
                graph[node->val].push_back(node->right->val);
                graph[node->right->val].push_back(node->val);
                q.push(node->right);                
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
     
        vector<vector<int>>graph(501);
        createGraph(root,graph);
        vector<int>ans;
        
        solve(graph,target->val,k,ans);
        return ans;
    }
};