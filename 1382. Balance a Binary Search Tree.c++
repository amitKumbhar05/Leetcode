#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<TreeNode*>arr;
    void inorder(TreeNode* root)
    {
        if(!root) return;
        inorder(root->left);
        arr.push_back(root);
        inorder(root->right);
    }
    TreeNode* balancebt(int start,int end)
    {
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode* root=arr[mid];
        root->left=balancebt(start,mid-1);
        root->right=balancebt(mid+1,end);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return balancebt(0,arr.size()-1);
    }
};