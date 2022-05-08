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
    vector<int> v;
    void helper(TreeNode *root, int low, int high)
    {
        if (!root)
        {
            return;
        }
        if (root->val >= low || root->val <= high)
        {
            v.push_back(root->val);
        }
        if (low < root->val)
        {
            helper(root->left, low, high);
        }
        if (high > root->val)
        {
            helper(root->right, low, high);
        }
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        helper(root, low, high);
        int sol = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            sol += v[i];
        }
        return sol;
    }
};
int main()
{

    return 0;
}