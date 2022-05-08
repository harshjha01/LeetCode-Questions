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
    void helper(TreeNode *root, int &ans, int sol)
    {

        if (!root)
        {
            return;
        }
        if (!root->left && !root->right)
        {
            ans += sol;
        }
        sol *= 10;
        sol += root->val;
        if (root->left)
        {
            helper(root->left, ans, sol);
        }
        if (root->right)
        {
            helper(root->right, ans, sol);
        }
    }
    int sumNumbers(TreeNode *root)
    {
        int ans = 0;
        helper(root, ans, 0);
        return ans;
    }
};
int main()
{

    return 0;
}