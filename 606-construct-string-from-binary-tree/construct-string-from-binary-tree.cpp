/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string tree2str(TreeNode* r) {
        if (r == NULL) 
            return "";
        string s = to_string(r->val);

        if (r->left) 
            s += '(' + tree2str(r->left) + ')';

        else if (r->right) 
            s += "()";

        if (r->right) 
            s += '(' + tree2str(r->right) + ')';

        return s;
    }
};