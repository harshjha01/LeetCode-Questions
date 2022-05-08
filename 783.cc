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
    int curr = INT_MAX;
    void sol(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        if (root->val - root->left->val < curr)
        {
            curr = root->val - root->left->val;
        }
        if (root->right->val - root->val < curr)
        {
            curr = root->right->val - root->val;
        }
        sol(root->left);
        sol(root->right);
    }
    int minDiffInBST(TreeNode *root)
    {
        sol(root);
        return curr;
    }
};
int main()
{

    return 0;
}