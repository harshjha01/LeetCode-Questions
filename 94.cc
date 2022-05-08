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
    void helper(TreeNode *root, vector<int> &sol)
    {
        if (!root)
        {
            return;
        }
        helper(root->left, sol);
        sol.push_back(root->val);
        helper(root->right, sol);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> sol;
        helper(root, sol);
    }
};
int main()
{

    return 0;
}