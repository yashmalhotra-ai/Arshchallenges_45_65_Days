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
//       1st int for diameter 2nd int for height
    pair<int,int> GetingDiameterASAP(TreeNode* root){
        
        if(root==NULL){
            pair<int,int> value=make_pair(0,0);
            return value;
        }
        pair<int,int> left=GetingDiameterASAP(root->left);
        pair<int,int> right=GetingDiameterASAP(root->right);
        
        int op1=left.first;
        int op2=right.first;
        int op3=left.second+right.second+1;
        pair<int,int> ans;
        ans.first=max(op1,max(op2,op3));
        ans.second= max(left.second,right.second)+1;
        return ans;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return GetingDiameterASAP(root).first-1;
    }
};