#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution
{
public:
    void helper(TreeNode *root, vector<int> &v)
    {
        if (!root)
        {
            return;
        }
        if (root->val == root->left->val)
        {
            v.push_back(root->val);
        }
        if (root->val == root->right->val)
        {
            v.push_back(root->val);
        }
        helper(root->left, v);
        helper(root->right, v);
    }
    vector<int> findMode(TreeNode *root)
    {
        if (!root)
        {
            return {};
        }
        vector<int> v;
        helper(root, v);
        return v;
    }
};
int main()
{

    return 0;
}