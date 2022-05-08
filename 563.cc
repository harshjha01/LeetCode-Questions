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
    int findTilt(TreeNode *root)
    {
        // if (!root->left && !root->right)
        // {
        //     return 0;
        // }
        // if (!root->left && root->right)
        // {
        //     return findTilt(root->right);
        // }
        // if (root->left && !root->right)
        // {
        //     return findTilt(root->left);
        // }
        // return root->val + abs(findTilt(root->right) - findTilt(root->left));
        if (!root)
        {
            return 0;
        }
        int sol = 0;
        helper(root, sol);
        return sol;
    }
    int helper(TreeNode *root, int &res)
    {
        if (!root)
        {
            return 0;
        }
        int left = (root->left ? helper(root->left, res) : 0);
        int right = (root->right ? helper(root->right, res) : 0);
        res += abs(left - right);
        return left + right + root->val;
    }
};
int main()
{

    return 0;
}